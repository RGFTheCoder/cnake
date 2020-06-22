#include "./ZaWarudo.hh"

ZaWarudo::ZaWarudo(string worldFileName)
{

	std::ifstream istrm{worldFileName, std::ios::binary};
	if (!istrm.is_open())
	{
		std::cout << "failed to open " << worldFileName << '\n';
		exit(1);
	}
	else
	{

		string line;
		while (line != "end")
		{
			std::getline(istrm, line);
			std::cout << line << std::endl;
		}
	}
}

//wym
void ZaWarudo::newApple(uint16_t count)
{
	while (count-- > 0)
	{
		const Pos newPos{(int)(randomNumber() * size.x), (int)(randomNumber() * size.y)};
		apples.push_back(newPos);
	}
}
auto ZaWarudo::spawnPlayer() -> void
{
	const Player newPlayer{};
	players.push_back(newPlayer);
}

Pos ZaWarudo::getSpawnPos()
{
	return {0, 0};
}
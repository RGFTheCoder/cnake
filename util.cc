#include "./util.hh"
std::mt19937 mersenne;
double randomNumber()
{
	// return ((double)rand() / (double)RAND_MAX);
	return ((double)mersenne() / (double)(pow(2, 32) - 1));
};
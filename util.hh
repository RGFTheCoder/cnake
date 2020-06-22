#pragma once
#include <cmath>
#include <random>

double randomNumber();

template <class T>
bool includes(std::vector<T> list, T element)
{
	for (T item : list)
	{
		if (item == element)
			return true;
	}
	return false;
}

template <class T>
bool remove(std::vector<T> &list, T element)
{
	size_t index = 0;
	for (T item : list)
	{

		if (item == element)
		{
			list.erase(list.begin() + index);

			return true;
		}

		index++;
	}
	return false;
}

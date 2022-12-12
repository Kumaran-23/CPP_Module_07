#ifndef ITER_HPP
# define ITER_HPP

#include <string>
#include <iostream>
#include <cmath>

template <typename Iter>
void	iter(Iter *array, size_t lenght, void (*func)(Iter &target))
{
	if (array == NULL || func == NULL)
		return ;
	for (size_t i = 0; i < lenght; i++)
		func(array[i]);
}

template <typename T>
void xTwo(T &array)
{
        array *= 2;
}

template <typename U>
void	print(const U array)
{
	std::cout << array << std::endl;
}

#endif
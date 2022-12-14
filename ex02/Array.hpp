/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snair <snair@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 13:55:55 by snair             #+#    #+#             */
/*   Updated: 2022/12/14 15:50:16 by snair            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <exception>
#include <cstdlib>

template<typename T>
class Array
{
	public:
		Array(void) : _arr(new T[0]), _size(0)
		{

		}

		Array(unsigned int n) : _size(n)
		{
			this->_arr = new T[n];
		}

		Array(Array &array)
		{
			this->_size = array.size();
			this->_arr = new T[this->_size];
			for (unsigned int i = 0; i < this->_size; i++)
				this->_arr[i] = array[i];
		}

		Array	&operator=(const Array &array)
		{
			if (this->_arr != 0)
				delete[] this->_arr;
			this->_arr = new T[array._size];
			for (unsigned int i = 0; i < array._size; i++)
				this->_arr[i] = array[i];
			this->_size = array._size;
			return (*this);
		}

		~Array(void)
		{
			std::cout << "destructor called" << std::endl;
			delete[] this->_arr;
		}

		T	&operator[](unsigned int i)
		{
			if (i >= this->_size)
				throw Array::IndexOutOfBounds();
			return (this->_arr[i]);
		}

		const T&	 operator[](unsigned int i) const
		{
			if (i >= this->_size)
				throw Array::IndexOutOfBounds();
			return (this->_arr[i]);
		}
	
		unsigned int	size(void) const
		{
			return (this->_size);
		}

		class IndexOutOfBounds : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Index is out of bounds");
				}
		};

	private:
		T				*_arr;
		unsigned int	_size;
};

template<typename T>
std::ostream &operator<<(std::ostream &out, Array<T> const &array)
{
	for (unsigned int i = 0; i < array.size(); i++)
		out << array[i] << " " << std::endl;
	return (out);
}

#endif
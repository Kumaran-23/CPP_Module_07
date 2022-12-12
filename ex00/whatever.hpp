#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

/*template allows a function to work with multiple data types
by passing the data type a a parameter. Best used for generic
functions, such as swap, min, max etc. Insted of making multiple
functions with the only difference being the returning data type 
or data type of the parameters templating a function can be done*/

//defines T as the template type
template <typename T> 
void    swap(T &a, T &b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}

//defines U as the template type
template <typename U>
const U	&min(U &a, U &b)
{
	return (a < b ? a : b);
}

//defines V as the template type
template <typename V>
const V	&max(V &a, V &b)
{
	return (a > b ? a : b);
}

#endif
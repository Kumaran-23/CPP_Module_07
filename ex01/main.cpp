/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snair <snair@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 13:26:31 by snair             #+#    #+#             */
/*   Updated: 2022/12/14 13:26:32 by snair            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

void iter_tolower(char &arr)
{
	arr = std::tolower(static_cast<char>(arr));
}

int main()
{
	int			arrInt[] = {1, 2, 3, 4};
    char        arrChar[3] = {'A', 'B', 'C'};
    std::string	arrStr[3] = {"Test", "Iter", "Template"};
    float 		arrFloat[5] = {1.67, 2.6, 3.327, 4.1};

	std::cout << "Tests" << std::endl;
	iter(arrChar, 3, iter_tolower);
	std::cout << "arrChar[0]: " << arrChar[0] << std::endl
	<< "arrChar[1]: " << arrChar[1] << std::endl
	<< "arrChar[2]: " << arrChar[2] << std::endl;
	iter(arrInt, 4, xTwo);
    std::cout << "arrInt[0]: " << arrInt[0] << std::endl
	<< "arrInt[1]: " << arrInt[1] << std::endl
	<< "arrInt[2]: " << arrInt[2] << std::endl
    << "arrInt[3]: " << arrInt[3] << std::endl;
	iter(arrFloat, 4, xTwo);
    std::cout << "arrFloat[0]: " << arrFloat[0] << std::endl
	<< "arrFloat[1]: " << arrFloat[1] << std::endl
	<< "arrFloat[2]: " << arrFloat[2] << std::endl
    << "arrFloat[3]: " << arrFloat[3] << std::endl;
    iter(arrStr, 2, print);
	return (0);
}

/*class Awesome
{
public:
Awesome( void ) : _n( 42 ) { return; }
int get( void ) const { return this->_n; }
private:
int _n;
};
std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }
template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }
int main() {
int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
Awesome tab2[5];
iter( tab, 5, print );
iter( tab2, 5, print );
return 0;
}*/
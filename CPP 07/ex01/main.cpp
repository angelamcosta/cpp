/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 18:41:04 by anlima            #+#    #+#             */
/*   Updated: 2024/02/20 13:31:43 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T> void printValue(T &t)
{
	std::cout << "t has the value => " << t << std::endl;
}

int	main(void)
{
	int intArray[4] = {1, 2, 3, 4};
	iter(intArray, 4, &printValue);

    char charArray[4] = {'a', 'b', 'c', 'd'};
	iter(charArray, 4, &printValue);
	return (0);
}

// class Awesome
// {
//   public:
//     Awesome( void ) : _n( 42 ) { return; }
//     int get( void ) const { return this->_n; }
//   private:
//     int _n;
// };

// std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
// {
//   o << rhs.get();
//   return o;
// }

// template< typename T >
// void print( T& x )
// {
//   std::cout << x << std::endl;
//   return;
// }

// int main() {
//   int tab[] = { 0, 1, 2, 3, 4 };
//   Awesome tab2[5];

//   iter(tab, 5, print<int>);
//   iter(tab2, 5, print<Awesome>);

//   return 0;
// }
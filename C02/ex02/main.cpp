#include "Fixed.hpp"

int	main(void)
{
	Fixed		a;
	Fixed const	b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed const c( Fixed( 5.05f ) / Fixed ( 2 ) );
	Fixed const d( Fixed( 5.05f ) / Fixed ( 1.01f ) );
	Fixed const e( Fixed( 2 ) * Fixed (5.05f));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	
	std::cout << b << std::endl;

	std::cout << Fixed::max(a, b) << std::endl;


	std::cout << Fixed::min(a, b) << std::endl;
	std::cout << Fixed::max(c, d) << std::endl;

	std::cout << c << std::endl;
	std::cout << d << std::endl;
	std::cout << e << std::endl;

	return (0);
}

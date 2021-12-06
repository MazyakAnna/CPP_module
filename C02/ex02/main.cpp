#include "Fixed.hpp"

int	main(void)
{
	Fixed		a;
	Fixed const	b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed const c( Fixed( 5.05f ) / Fixed ( 2 ) );
	Fixed const d( Fixed( 5.05f ) / Fixed ( 1.01f ) );
	Fixed const e( Fixed( 2 ) * Fixed (5.05f));
	Fixed const mB( Fixed (-5.05f) * Fixed (2));
	Fixed const mmB( Fixed (-5.05f) * Fixed (-2));
	Fixed		mA;

	Fixed		i(10);
	Fixed		j(5);
	Fixed		mI(-10);
	Fixed		mJ(-5);

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

	std::cout << mA << std::endl;
	std::cout << --mA << std:: endl;
	std::cout << mA << std::endl;
	std::cout << mA-- << std::endl;
	++mA;
	++mA;
	std::cout << mA << std::endl;

	std::cout << mB << std::endl;
	std::cout << Fixed::max(mA, mB) << std::endl;
	std::cout << Fixed::max(mA, a) << std::endl;
	std::cout << Fixed::max(mB, b) << std::endl;

	std::cout << mmB << std::endl;
	std::cout << Fixed::max(mmB, mB) << std::endl;

	std::cout << i << " | " << j << " | " << mI << " | " << mJ << std::endl;
	std::cout << i + j << std::endl;
	std::cout << i - j << std::endl;
	std::cout << j - i << std::endl;
	std::cout << i + mI << std::endl;
	std::cout << mJ + j << std::endl;
	std::cout << mJ - mI << std::endl;
	std::cout << mI - mJ << std::endl;
	std::cout << mI + mJ << std::endl;

	return (0);
}

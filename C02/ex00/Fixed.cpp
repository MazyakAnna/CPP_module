#include "Fixed.hpp"

Fixed::Fixed(void) : value (0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

//copy constructor
Fixed::Fixed(Fixed const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	this->value = src.getRawBits();
	return ;
}

// assignation operator overload.
Fixed &	Fixed::operator=(Fixed const & rihgt_operand)
{
	std::cout << "Assignation operator called " << std::endl;
	this->value = rihgt_operand.getRawBits();
	return (*this);
}


void Fixed::setRawBits( int const raw ) //sets the raw value of the fixed point value
{
	this->value = raw;
	return ;
}

int Fixed::getRawBits( void ) const//returns the raw value of the fixed point value.
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

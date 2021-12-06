#include "Fixed.hpp"

Fixed::Fixed(void) : value (0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const int int_val)
{
	std::cout << "Int constructor called" << std::endl;
	this->value = int_val << this->frac_bits;
	return ;
}

Fixed::Fixed(const float fl_val)
{
	int	tail_saver;

	std::cout << "Float constructor called" << std::endl;
	tail_saver = 1 << frac_bits;
	this->value = roundf(fl_val * tail_saver);
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

float	Fixed::toFloat(void) const
{
	float	res;

	res = (float)this->value / (1 << this->frac_bits);
	return (res);
}

int	Fixed::toInt(void) const
{
	return (this->value >> this->frac_bits);
}

std::ostream& operator<<(std::ostream & o, Fixed const& fix_n)
{
	o << fix_n.toFloat();
	return o;
}

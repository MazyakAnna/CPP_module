#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

Fixed::Fixed(const int int_val)
{
	std::cout << "Int constructor called" << std::endl;
	this->value = int_val << this->frac_bits;
	return ;
}

Fixed::Fixed(const float fl_val)
{
	int	tmp_int;

	std::cout << "Float constructor called" << std::endl;
	//tmp_int = 1 << frac_bits;
	//this->value = roundf(fl_val * tmp_int);
	this->value = roundf(fl_val << this->frac_bits);
	return ;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

//copy constructor
Fixed::Fixed(Fixed const & src);
{
	std::cout << "Copy constructor called" << std::endl;
	this->value = src.getRawBits();
	return ;
}

// assignation operator overload.
Fixed::Fixed &	operator=(Fixed const & rihgt_operand);
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

float	toFloat(void) const
{
	float	res;

	res = this->value >> this->frac_bits;
	return (res);
}

int	toInt(void) const
{
	return (this->value >> this->frac_bits);
}

std::iostream& operator<<(std::iostream& o, Fixed const& fix_n)
{
	o << fix_n.toFloat();
	return o;
}
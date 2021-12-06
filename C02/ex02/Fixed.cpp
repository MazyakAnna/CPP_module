#include "Fixed.hpp"

Fixed::Fixed(void) : _value (0)
{
//	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const int int_val)
{
//	std::cout << "Int constructor called" << std::endl;
	this->_value = int_val << this->_frac_bits;
	return ;
}

Fixed::Fixed(const float fl_val)
{
	int	tail_saver;

//	std::cout << "Float constructor called" << std::endl;
	tail_saver = 1 << this->_frac_bits;
	this->_value = roundf(fl_val * tail_saver);
	return ;
}

Fixed::~Fixed()
{
//	std::cout << "Destructor called" << std::endl;
	return ;
}

//copy constructor
Fixed::Fixed(Fixed const & src)
{
//	std::cout << "Copy constructor called" << std::endl;
	this->_value = src.getRawBits();
	return ;
}

// assignation operator overload.
Fixed &	Fixed::operator=(Fixed const & rihgt_operand)
{
//	std::cout << "Assignation operator called " << std::endl;
	this->_value = rihgt_operand.getRawBits();
	return (*this);
}


void Fixed::setRawBits( int const raw )
{
	this->_value = raw;
	return ;
}

int Fixed::getRawBits( void ) const//returns the raw value of the fixed point value.
{
//	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

float	Fixed::toFloat(void) const
{
	float	res;

	res = (float)this->_value / (1 << this->_frac_bits);
	return (res);
}

int	Fixed::toInt(void) const
{
	return (this->_value >> this->_frac_bits);
}

bool Fixed::operator>(Fixed const & rv_fixed) const
{
	if (this->_value > rv_fixed.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator<(Fixed const & rv_fixed) const
{
	if (this->_value < rv_fixed.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator>=(Fixed const & rv_fixed) const
{
	if (this->_value < rv_fixed.getRawBits())
		return (false);
	return (true);
}

bool Fixed::operator<=(Fixed const & rv_fixed) const
{
	if (this->_value > rv_fixed.getRawBits())
		return (false);
	return (true);
}

bool Fixed::operator==(Fixed const & rv_fixed) const
{
	if (this->_value == rv_fixed.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator!=(Fixed const & rv_fixed) const
{
	if (this->_value == rv_fixed.getRawBits())
		return (false);
	return (true);
}

Fixed Fixed::operator+(Fixed const & rv_fixed) const
{
	return (Fixed (this->_value + rv_fixed.getRawBits()));
}

Fixed Fixed::operator-(Fixed const & rv_fixed) const
{
	return (Fixed (this->_value - rv_fixed.getRawBits()));
}

Fixed Fixed::operator*(Fixed const & rv_fixed) const
{
	return (Fixed (this->_value * rv_fixed.getRawBits()));
}

Fixed Fixed::operator/(Fixed const & rv_fixed) const
{
	return (Fixed (this->_value / rv_fixed.getRawBits()));
}


Fixed & Fixed::operator++(void)
{
	this->_value = this->_value + 1;
	return *this;
}

Fixed & Fixed::operator--(void)
{
	this->_value = this->_value - 1;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed tmp;

	tmp = *this;
	this->_value = this->_value + 1;
	return tmp;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp;

	tmp = *this;
	this->_value = this->_value - 1;
	return tmp;
}

std::ostream& operator<<(std::ostream & o, Fixed const& fix_n)
{
	o << fix_n.toFloat();
	return o;
}

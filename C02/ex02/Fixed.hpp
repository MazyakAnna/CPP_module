#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed
{
private:
	int	_value;
	static const int	_frac_bits = 8;
public:
	Fixed(void);
	Fixed(const int int_val);
	Fixed(const float fl_val);
	~Fixed();
	Fixed(Fixed const & src);

	Fixed &	operator=(Fixed const & rv_fixed);

	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat(void) const;
	int toInt(void) const;

	bool operator>(Fixed const & rv_fixed) const;
	bool operator<(Fixed const & rv_fixed) const;
	bool operator>=(Fixed const & rv_fixed) const;
	bool operator<=(Fixed const & rv_fixed) const;
	bool operator==(Fixed const & rv_fixed) const;
	bool operator!=(Fixed const & rv_fixed) const;

	Fixed operator+(Fixed const & rv_fixed) const;
	Fixed operator-(Fixed const & rv_fixed) const;
	Fixed operator*(Fixed const & rv_fixed) const;
	Fixed operator/(Fixed const & rv_fixed) const;

	//prefix increment and decrement:
	Fixed & operator++(void);
	Fixed & operator--(void);
	//postfix increment and decrement:
	Fixed operator++(int);
	Fixed operator--(int);

	static Fixed & min(Fixed & first, Fixed & second);
	static Fixed & max(Fixed & first, Fixed & second);
	static Fixed const & min(Fixed const & first, Fixed const & second);
	static Fixed const & max(Fixed const & first, Fixed const & second);

};

std::ostream & operator<<(std::ostream & o, Fixed const & fix_n);

#endif

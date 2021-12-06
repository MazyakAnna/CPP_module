#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed
{
private:
	int	value;
	static const int	frac_bits = 8;
public:
	Fixed(void);
	Fixed(const int int_val);
	Fixed(const float fl_val);
	~Fixed();
	Fixed(Fixed const & src);

	Fixed &	operator=(Fixed const & op);

	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat(void) const;
	int toInt(void) const;
};

std::ostream & operator<<(std::ostream & o, Fixed const& fix_n);

#endif

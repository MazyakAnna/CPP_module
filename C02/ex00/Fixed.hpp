#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>


class Fixed
{
private:
	int	value;
	static const int	frac_bits = 8;
public:
	Fixed(void);
	~Fixed();
	Fixed(Fixed const & src);

	Fixed &	operator=(Fixed const & op);

	int getRawBits( void ) const;
	void setRawBits( int const raw );
};

#endif
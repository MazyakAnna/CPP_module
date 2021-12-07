#ifndef POINT_HPP
# define POINT_HPP
# include "Fixed.hpp"

class Point
{
	private:
		Fixed const _x;
		Fixed const _y;
	public:
		Point (void);
		~Point();
		Point (Point const &src);
		Point (float const x, float const y);
		Point & operator=(Point const & rv_point);

		void setX(Fixed const x);
		void setY(Fixed const y);
		Fixed getX(void) const;
		Fixed getY(void) const;
};

#endif

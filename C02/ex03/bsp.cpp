#include "Point.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed tmp;
	Fixed zero;
	int sign;

	tmp = (a.getX() - point.getX()) * (b.getY() - a.getY()) - (b.getY() - point.getY()) * (b.getY() - a.getY());
	if (tmp == zero)
		return (false);
	if (tmp > zero)
		sign = 1;
	else
		sign = -1;
	tmp = (b.getX() - point.getX()) * (c.getY() - b.getY()) - (c.getY() - point.getY()) * (c.getY() - b.getY());
	if (tmp == zero)
		return (false);
	if ((tmp > zero && sign < 0) || (tmp < zero && sign > 0))
		return (false);
	tmp = (c.getX() - point.getX()) * (a.getY() - c.getY()) - (a.getY() - point.getY()) * (a.getY() - c.getY());
	if (tmp == zero)
		return (false);
	if ((tmp > zero && sign < 0) || (tmp < zero && sign > 0))
		return (false);
	return (true);
}

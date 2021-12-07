#include "Point.hpp"

Point::Point (void) : _x(0), _y(0)
{
	return ;
}

Point::~Point()
{
	return ;
}

Point::Point (Point const &src)
{
	this->_x.setRawBits(src.getX().getRawBits());
	this->_y.setRawBits(src.getY().getRawBits());
	return ;
}

Point::Point (float const x, float const y)
{
	this->_x = Fixed(x);
	this->_y = Fixed(y);
	return ;
}

Point & Point::operator=(Point const & rv_point)
{
	this->_x = rv_point.getX();
	this->_y = rv_point.getY();
	return ;
}

Fixed Point::getX(void) const
{
	return (this->_x);
}

Fixed Point::getY(void) const
{
	return (this->_y);
}

//void Point::setX(Fixed const x)
//{
//	this->_x = x;
//	return ;
//}

//void Point::setY(Fixed const y)
//{
//	this->_y = y;
//	return ;
//}


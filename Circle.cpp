#include "Circle.h"

Circle::Circle(const Point & center, const unsigned& radius, const Color c) : Shape(center, c)
{
	m_radius = radius;
}

Point Circle::get_radius() const
{
	return m_radius;
}

void Circle::draw() const
{
	cout << m_color << " Circle : Center in " << m_org << " Radius is " << m_radius << endl;
}

void Circle::scale(const int & factor)
{
	m_radius *= factor;
}




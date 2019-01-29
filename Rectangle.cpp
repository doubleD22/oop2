#include "Rectangle.h"

Rectangle::Rectangle(const Point & downleft, const Point & upright, const Color c) : Shape(downleft,c)
{
	m_upright = upright;
}

void Rectangle::move(const Point & p)
{
	Shape::move(p);
	m_upright += p;
}

void Rectangle::draw() const
{
	Line down(m_org, Point(m_upright.get_x(),m_org.get_y()), m_color);
	Line up(Point(m_org.get_x(), m_upright.get_y()) , m_upright, m_color);
	Line left(m_org, Point(m_org.get_x(), m_upright.get_y()), m_color);
	Line right(Point(m_org.get_x(), m_upright.get_y()), m_upright, m_color);
	cout << m_color << " rectangle"<< endl;
	cout << "		";
	down.draw();
	cout << "		";
	left.draw();
	cout << "		";
	up.draw();
	cout << "		";
	right.draw();
}

void Rectangle::scale(const int & factor)
{
	Line diagonal_line(m_org, m_upright, m_color);
	diagonal_line.scale(factor);
	m_upright = diagonal_line.get_end();
}

double Rectangle::area() const
{
	return (m_upright.get_y() - m_org.get_y())*(m_upright.get_x() - m_org.get_x());
}

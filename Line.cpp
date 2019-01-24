#include "Line.h"
#include <math.h>  

Line::Line(const Point & p1, const Point & p2, const Color c) : Shape(p1, c)
{
	m_end = p2;
}

void Line::move(const Point & p)
{
	m_org += p;
	m_end += p;
}

void Line::draw() const
{
	cout<<m_color<< " Line from " << m_org << " To " << m_end << endl;
}

double Line::length() const
{
	return sqrt((double)((m_org.get_x() - m_end.get_x())*(m_org.get_x() - m_end.get_x()) + (m_org.get_y() - m_end.get_y())*(m_org.get_y() - m_end.get_y())));
}


void Line::scale(const int & factor)
{
	double length = this->length();
	double alpha = atan((m_end.get_y() - m_org.get_y()) / (m_end.get_x() - m_org.get_x()));
	int newx = m_end.get_x() + length*(factor - 1)*cos(alpha) - m_org.get_x();
	int newy = m_end.get_y() + length*(factor - 1)*sin(alpha) - m_org.get_y();
	Point temp(newx, newy);
	m_end = temp;
}

							
#include "Line.h"

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

Point Line::get_end_point(const unsigned & length)
{
}

void Line::scale(const int & factor)
{
	double length = this->length();
	length *= factor;
	double slope = (m_end.get_y() - m_org.get_y()) / (m_end.get_x() - m_org.get_x());


}

							
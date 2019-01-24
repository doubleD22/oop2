#include "Rectangle.h"

Rectangle::Rectangle(const Point & downleft, const unsigned & width, const unsigned & height, const Color c) : Shape(downleft,c)
{
	m_downright = Point(m_org.get_x()+ width, m_org.get_y());
	m_upleft = Point(m_org.get_x() , m_org.get_y() + height);
	m_upright = Point(m_org.get_x() + width, m_org.get_y() + height);
}

void Rectangle::move(const Point & p)
{
}

void Rectangle::draw() const
{

}

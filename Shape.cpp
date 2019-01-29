#include "Shape.h"

Shape::Shape(const Point & org, const Color color)
{
	m_org = org;
	m_color = color;
}


void Shape::move(const Point & P)
{
	m_org += P;
}

Point Shape::get_org()
{
	return m_org;
}



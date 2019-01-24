#include "Shape.h"

Shape::Shape(const Point & org, const Color color)
{
	m_org = org;
	m_color = color;
}

Shape::~Shape()
{
}

void Shape::draw()
{

}

void Shape::move(const Point & P)
{
	m_org += P;
}



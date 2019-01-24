#pragma once
#include "Shape.h"


class Circle : public Shape
{
protected:
	unsigned m_radius;
public:
	Circle(const Point& center, const unsigned& radius, const Color c);
	Point get_radius() const;
	void draw() const;
	void scale(const int& factor);
};
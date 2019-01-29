#pragma once
#include "Shape.h"
#include "Line.h"

class Rectangle : public Shape
{
protected:
	Point m_upright;

public:
	Rectangle(const Point & downleft, const Point & upright, const Color c);
	void move(const Point& p);
	void draw() const;
	void scale(const int& factor);
	double area() const;
	string who_am_i();
}; 
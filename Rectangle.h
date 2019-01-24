#pragma once
#include "Shape.h"
#include "Line.h"

class Rectangle : public Shape
{
protected:
	Point m_downright;
	Point m_upleft;
	Point m_upright;
public:
	Rectangle(const Point & downleft, const unsigned & width, const unsigned & height, const Color c);
	void move(const Point& p);
	void draw() const;
	double length() const;
	string who_am_i();
}; 
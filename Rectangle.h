#pragma once
#include "Shape.h"
#include "Line.h"

class Rectangle : public Shape
{
protected:
	Line m_upline;
	Line m_downline;
	Line m_rightline;
	Line m_leftline;
public:
	Rectangle(const Point& p1, Line upline, Line downline, Line rightline, Line leftline, const Color c);
	void move(const Point& p);
	void draw() const;
	double length() const;
	string who_am_i();
}; 
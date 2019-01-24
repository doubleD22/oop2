#pragma once
#include <iostream>
#include <string>
using namespace std;

enum class Color { white=0, red, green, blue, yellow, black, END_OF_COLORS };

ostream& operator<<(ostream& os, Color c)
{
	switch (c)
	{
	case Color::white:		os << "White "; break;
	case Color::red:		os << "Red "; break;
	case Color::green:		os << "Green "; break;
	case Color::blue:		os << "Blue "; break;
	case Color::yellow:		os << "Yellow "; break;
	case Color::black:		os << "Black "; break;
	default:				os << "No color ";
	}
	return os;
}


class Point {
private:
	int m_xc, m_yc;	//(x,y) coordinats

public:
	Point(int x = 0, int y = 0) : m_xc(x), m_yc(y) {}
	int get_x(void) const { return m_xc; }
	int get_y(void) const { return m_yc; }

	Point operator+(const Point& p) const
	{
		return Point(m_xc + p.m_xc, m_yc + p.m_yc);
	}
	Point& operator+=(const Point& p) //move point
	{
		m_xc += p.m_xc;
		m_yc += p.m_yc;
		return *this;
	}
	Point& operator=(const Point& p) //move point
	{
		*this = p;
		return *this;
	}
	friend ostream& operator<<(ostream& os, const Point& p)
	{
		os << '(' << p.get_x() << ',' << p.get_y() << ')';
		return os;
	}
};
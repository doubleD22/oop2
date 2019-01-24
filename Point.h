#pragma once
#include <iostream>
#include <string>
using namespace std;

enum class Color { white=0, red, green, blue, yellow, black, END_OF_COLORS };

std::ostream& operator << (std::ostream& os, const Color& c)
{
	os << c;
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
	friend ostream& operator<<(ostream& os, const Point& p)
	{
		os << '(' << p.get_x() << ',' << p.get_y() << ')';
		return os;
	}
};
#pragma once
#include "Shape.h"

class Canvas : public Shape
{
protected:
	Shape** m_shapes;
	int m_length;
public:
	Canvas(const Point& p, Color c, Shape** shapes = 0, int length=0);
	Canvas(const Canvas& c);
	~Canvas();
	void draw() const;
	void scale(const int& factor);
	double area() const;
	void insert_shape(Shape* shape);
};
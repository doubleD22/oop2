#include "Canvas.h"


Canvas::Canvas(const Point& p, Color c, Shape** shapes, int length) : Shape(p,c)
{
	m_length = length;
	if (m_length)
		m_shapes = new Shape*[length];
	else
		m_shapes = nullptr;
	if (shapes)
		for (int i = 0; i < m_length; i++)
			m_shapes[i] = shapes[i];
}

Canvas::~Canvas()
{
	if (m_shapes)
		delete[] m_shapes;
}

void Canvas::draw() const
{
	cout << "------------------- " << m_color << " canvas" << " -------------------" << endl;
	for (int i = 0; i < m_length; i++)
	{
		Point temp_org((*m_shapes)[i].get_org);
		(*m_shapes)[i].move(m_org);
		(*m_shapes)[i].draw;
		(*m_shapes)[i].move(temp_org);
	}
	cout << "------------------- " << "end canvas" << " -------------------" << endl;
}

void Canvas::scale(const int & factor)
{
	for (int i = 0; i < m_length; i++)
		(*m_shapes)[i].scale(factor);
}

double Canvas::area() const
{
	double temp = 0;
	for (int i = 0; i < m_length; i++)
		temp += (*m_shapes)[i].area();
	return temp;
}

void Canvas::insert_shape(Shape * shape)
{
	Shape** temp = new Shape*[m_length + 1];
	for (int i = 0; i < m_length; i++)
		temp[i] = m_shapes[i];
	temp[m_length] = shape;
	if(m_shapes)
		delete[] m_shapes;
	m_shapes = temp;
	m_length++;
}

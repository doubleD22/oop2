#pragma once
#include "Point.h"

class Shape : public Point
{
protected:
	Point m_org;    //the coordination point for the begging of the shape
	Color m_color; //the color of the shape

public:
	Shape(const Point& org, const Color color);  //constructor
	virtual ~Shape()=0;      //pure virtual distractor -- the childrens need to  
							//coplete this in their class
	virtual void draw()=0;           //writing the text that describes the shape
	void move(const Point& P);	 //moving m_org (and therefore moving the shape) by
								 //another point coordinates
	virtual string who_am_i()=0; //the name says it all 
};
	
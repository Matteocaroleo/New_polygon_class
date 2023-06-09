/*! \file rectangle.h
	\brief Declaration of the class Rectangle

	Details.
*/


#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "polygon.h"
#include <iostream>

using namespace std;

/// @class Rectangle
/// @brief to manage an object with the shape of a rectangle
class Rectangle : public Polygon
{
private:
	int length;
	int width;
	float Perimeter();
	float Area ();

public:

	Rectangle();
	Rectangle(int w, int l);
	Rectangle(const Rectangle& source); //const � un salvaguardia
	virtual ~Rectangle();

	Rectangle& operator=(const Rectangle& r);
	bool operator==(const Rectangle& r);

	void Init();
	void Init(const Rectangle& r);
	void Reset();

	void SetDim(int w, int l);
	void SetLength(int l);
	void SetWidth(int w);

	void GetDim(int& w, int& l);
	int GetLength();
	int GetWidth();

	int GetArea();
	int GetPerimeter();

	void ErrorMessage (const char* string);
	void WarningMessage (const char* string);
	void Dump();
	
};

ostream& operator << (ostream& out, Rectangle& source);
istream& operator >> (istream& in, Rectangle& source);

#endif

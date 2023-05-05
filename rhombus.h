/// @file rhombus.h
/// @brief Declaration of the class Rhombus
///
///	Details.
///


#ifndef RHOMBUS_H
#define RHOMBUS_H

#include "polygon.h"
#include <iostream>

/// @class Rhombus
/// @brief to manage an object with the shape of a rhombus
class Rhombus: public Polygon
{
private:
	float diagH;
	float diagV;
	float Side();

protected:
	void ErrorMessage(const char* string);
	void WarningMessage(const char* string);
	float Area();
	float Perimeter();
	
public:

	Rhombus();
	Rhombus(float dH, float dV);
	Rhombus(const Rhombus& r);

	virtual ~Rhombus();

	Rhombus& operator=(const Rhombus& r);
	bool operator==(const Rhombus& r);

	void Init();
	void Init(const Rhombus& source);
	void Reset();
	void Dump();

	void SetDim(float dH, float dV);
	void SetDiagH(float dH);
	void SetDiagV(float dV);

	void GetDiagonals(float& dH, float& dV);
	float GetDiagH();
	float GetDiagV();
	float GetSide(); 
};

std::ostream& operator<<(std::ostream& out, Rhombus& source);
std::istream& operator>>(std::istream& in, Rhombus& source);
#endif


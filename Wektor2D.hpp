//#include <print>
#include <cmath>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>


class Wektor2D
{
	double x;
	double y;

public:
	// Konstruktor domyślny
	Wektor2D() : x(0), y(0)
	{
		//std::println("SPRAWDZENIE 1 -> Wartosc x: {}. Wartosc y: {}.", x, y);
	}

	// Setter dla x
	void setX(double nowyX) 
	{
		x = nowyX;
	}

	// Getter dla x
	double getX() const 
	{
		return x;
	}

	// Setter dla y
	void setY(double nowyY) 
	{
		y = nowyY;
	}

	// Getter dla y
	double getY() const 
	{
		return y;
	}

	Wektor2D(double x2, double y2)
	{
		x = x2;
		y = y2;
		//std::println("SPRAWDZENIE 3 -> Wartosc x2: {}. Wartosc y2: {}.",x2, y2);
	}

	Wektor2D operator+(const Wektor2D& other) const {
		return Wektor2D(x + other.x, y + other.y);
	}

	double operator*(const Wektor2D& other) const {
		return x * other.x + y * other.y;
	}

};

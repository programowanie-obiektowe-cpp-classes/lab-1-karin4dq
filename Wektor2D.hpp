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


int main()
{
	Wektor2D v1{};
	v1.setX(1.);             
	v1.setY(1.);

	double x1 = v1.getX();
	double y1 = v1.getY();

	//std::println("SPRAWDZENIE 2 -> Wartosc x1: {}, Wartosc y1: {}.", x1, y1);


	Wektor2D v2{ 2., 2. };
	//std::println("SPRAWDZENIE 3 -> Wartosc x2: {}, Wartosc y2: {}.", v2.getX(), v2.getY());

	Wektor2D sum = v1 + v2;
	//std::println("SPRAWDZENIE 4 -> Wynik sumowania: x3: {}, y3: {}.", sum.getX(), sum.getY());

	double prod = v1 * v2;
	//std::println("SPRAWDZENIE 5 -> Wartosc mnozenia skalarnego: {}", prod);


	return 0;
}


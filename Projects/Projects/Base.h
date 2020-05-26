#include<string>
#include<iostream>
using namespace std;
class Printable
{
public:

	void CoutString(string x)
	{
		cout << x;
	}

};
class Named :public Printable
{
public:
	virtual double getSquare() = 0;
	virtual double getPerimeter() = 0;
	virtual string showFigureType() = 0;

};
class Shapes :public Printable
{
public:
	Shapes():Printable(){};
	int GetCount();

};

class Rectangle : public Named
{
private:
	double width;
	double height;
public:
	Rectangle(double w, double h)
	{
		width = w;
		height = h;
	}
	double getSquare() override
	{
	return width * height;
	}
	double getPerimeter() override
	{
		cout << width * 2 + height * 2 << endl;
	}
	string showFigureType()
	{
		"Rectangle" ;
	}
};
class Circle : public Named
{
    private:
	double radius;
    public:
		Circle(double r)
		{
			radius = r;
		}
		double getSquare() override
	{
		return radius * radius * 3.14 ;
	}
		double getPerimeter() override
	{
			return 2 * 3.14 * radius;
	}
		string showFigureType()
	{
		return "Circle" ;
	}
};


class Square:public Named{
private:
	double a;
public:
	Square(double x) 
	{
		a = x;
	}
	double getSquare() override
	{
		return a * a ;
	}
	double getPerimeter() override
	{
		return 4 * a ;
	}
	string showFigureType()
	{
		return "Square" ;
	}
};
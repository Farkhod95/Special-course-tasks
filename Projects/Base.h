#include<string>
#include<iostream>
using namespace std;
class Printable
{
public:
	Printable(){};
	string Text;
};
class Named :public Printable
{
public:
	
	virtual double getSquare() = 0;
	virtual double getPerimeter() = 0;
};
class Shapes :public Printable
{
	//Statik: Shape::GetCount();
	
};

class Rect : public Named
{
private:
	double width;
	double height;
public:
	Rect(double w, double h)
	{
		width = w;
		height = h;
		Text = "Rectangle - ...";
	}
	double getSquare() override
	  {
	return width * height;
	  }
	double getPerimeter() override
	  {
	return width * 2 + height * 2;
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
			Text = "Circle - ...";
		}
		double getSquare() override
	{
		return radius * radius * 3.14 ;
	}
		double getPerimeter() override
	{
			return 2 * 3.14 * radius;
	}
		
};


class Square :public Named{
private:
double a;
public:
	Square(double x) 
	{
		a = x;
		Text = "Square - ...";
	}
	double getSquare() override
	{
		return a * a ;
	}
	double getPerimeter() override
	{
		return 4 * a ;
	}
	
	
};
 

std::ostream& operator << (std::ostream& os, const Square& obj) {
	os << obj.Text << '\n';
	return os;
}
std::ostream& operator << (std::ostream& os, const Circle& obj) {
	os << obj.Text << '\n';
	return os;
}
std::ostream& operator << (std::ostream& os, const Rect& obj) {
	os << obj.Text << '\n';
	return os;
}
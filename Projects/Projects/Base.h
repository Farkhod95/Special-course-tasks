#include<string>
using namespace std;
template<class T>
class contener
{
	// Contener �������� �������� �������;
private:
	int i; // i - ���������� ��������� � ���� ����������;
	T *a = new T[10000]; // // max ��������� 10000 ���������;
public:
	contener(){ i = 0; };  // K���� ��� ���������� ������������ ��������� i = 0;
	
	void Add_item(T b)
	{
		a[++i] = b; // �� ��������� ������� � �����
	}
	void clean_contener()
	{
		if (i > 0)
			�i; // ������� ��������� �������;

	}
	T Know_index(int j)
	{
		// ���������� j, ���� � ���������� ���� ������� j;
		if (j > 0 && j <= i)
			return a[j];

	}
	int Number_elements()
	{
		return i; // ���������� ���������� ��������� � ����������;
	}
	bool Empty()
	{
		// ���������� true, ���� ��������� ����, ����� false;
		if (i > 0)return false;
		else return true;
	}
	void clean(){ i = 0; }// ������� ����������;
	~contener(){ delete a; }// ���� ���������� ������� ������ ��� �������� ���������; 
};
class Point{
public:
	double a, b;
};
class Printable
{
public:
	//virtual string name() = 0;

};

class Named :public Printable
{
private:
	double x, y;
	double x1, y1, R;
	double X1, X2, Y1, Y2;
	double squar;
	contener<Point>point_xy;
	double a, b, c, d;
public:
	Named() :Printable(){};
	void  point(double _x, double _y) { x = _x; y = _y; };
	void  circle(double _x1, double _y1) { x1 = _x1; y1 = _y1; };
	void  rect(double _x1, double _y1, double _x2, double _y2){
		X1 = _x1; X2 = _x2; Y1 = _y1; Y2 = _y2;
	};
	void  square(double a) { squar = a; };
	void  polyline(Point a) { point_xy.Add_item(a); };
	void  polylgon(double _a, double _b, double _c, double _d) { a = _a; c = _c; b = _b; d = _d; };

};

class Shapes :public Printable
{
public:
	Shapes() :Printable(){};
	//int GetCount();

};

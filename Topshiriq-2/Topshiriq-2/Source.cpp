#include<iostream>
#include<string>
using namespace std;
// glabal o'zgaruvchilar
string malumot;
int i = 0;
// Printable sinfini yaratdik
class Printable
{

	float nuqtax,nuqtay;
	float aylanax, aylanay, R;
	float A;
	float x1, x2, y1, y2;
	int a, b, c, d;
public:
	// konstruktorlar 
	Printable();
	Printable(float x, float y);
	Printable(float aylanax, float aylanay,float R);
	Printable(float x1, float y1, float x2,float y2);
	Printable(float A);
	Printable(int _a, int _b, int _c, int _d);

};
// bular konustruktorlarning tana qismi
Printable::Printable()
{
	malumot+= "- o'zgaruvchi shakil emas \n";
}
Printable::Printable(float x, float y)
{
	i++;
	nuqtax = x; nuqtay = y;
	malumot += "- o'zgaruvchi Nuta \n";
}
Printable::Printable(float _aylanax, float _aylanay, float _R)
{
	i++;
	aylanax = _aylanax; aylanay = _aylanay; R = _R;
	malumot += "- o'zgaruvchi Aylna \n";
}
Printable::Printable(float _x1, float _y1, float _x2, float _y2)
{
	x1 = _x1; x2 = _x2; y1 = _y1; y2 = _y2;
	malumot += "- o'zgaruvchi To'g'ri turtburchak \n";
	i++;

}

Printable::Printable(float _a)
{
	A = _a;
	i++;
	malumot += "- o'zgaruvchi kvadrat \n";
}
Printable::Printable(int _a, int _b, int _c, int _d)
{
	a = _a; b = _b; c = _c; d = _d;
	i++;
	malumot += "- o'zgaruvchi Ixtiyoriy turtburchak \n";
}


int main()
{
	Printable a(1, 2);
	Printable s(1, 42);
	Printable sd(1, 42);
	Printable ad(12,2,12); 
	Printable aw(12, 2);
    cout<<malumot<<endl<<"shalillar soni "<<i<<endl;
	system("pause");
	return 0;
}
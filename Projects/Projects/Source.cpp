#include<iostream>
#include"Base.h"
using namespace std;
int main()
{

	contener<Named>b;
	Named a;
	a.circle(12, 64);
	a.point(56, 58);
	b.Add_item(a);

	system("pause");
	return 0;
}
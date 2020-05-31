#include<iostream>
#include"Base.h"
#include"Contianer.h"
int main()
{
	Container<int> obg;
	obg.add(265);
	obg.add(40);
	obg.add(75);
	obg.add(42);
	obg.add(85);
	obg.add(25);
	obg.add(74);

	std::cout << "length of massive: " << obg.length() << endl;
	for (int i = 0; i < obg.length(); i++)
	{
		try{
			std::cout << obg[i] << endl;
		}
		catch (...){}
	}

	Circle d(45);
	std::cout << d;

	system("pause");
	return 0;
}
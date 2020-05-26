#include<iostream>
#include"Base.h"
#include"Contianer.h"
int main()
{
	
	Container<int> obg;
	obg.add(465);
	obg.add(54);
	obg.add(65);
	obg.add(37);
	obg.add(74);
	obg.add(78);
	obg.add(74);
	obg.add(77);
	std::cout << "length of massive: " << obg.length() << endl;
	for (int i = 0; i < obg.length(); i++)
	{
		try{
			std::cout << obg[i]<<endl;
	       }
		catch (...){}
	}
	system("pause");
	return 0;
}
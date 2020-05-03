// Спецкурс ООП задача 1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;
template<class T>
class contener
{
	//	 ;
private:
	int i; // i bu contnerdagi elementlar soni;
	T *a = new T[10000]; // oldindan 10000 ta joy ajratib quydim elementlar uchun max 10000 ta element qabul qiladi;
public:
	contener(){ i = 0; }; // bu konstruktor uzgaruvchi elon qilinganda i ga 0 yuklaydi;
	void O_Element_qush(T b)
	{
		a[++i] = b;// bu yerda oxiriga element qushamiz
	}
	void O_Element_uchir()
	{
		if (i > 0)
			--i; // bu yerda oxirigi elementini uchiramiz;
		else
			cout << " Elementlarning hammasi uchib bo'lingan \n";
	}
	T index_bn_olish(int j)
	{
		// bu yerda contenerda j-chi element mavjud bulsa shuni qaytaradi eks holda else ga utadi
		if (j > 0 && j <= i)
			return a[j];
		else
			cout << " bunday indexli element mevjudems  \n";
	}
	int Element_soni()
	{
		return i; // bu yerda contenerdagi elementlar sonini qaytaradi;
	}
	bool bushmi()
	{//bu yerda contener bush bo'lsa true aks holda false qaytaradi;
		if (i > 0)return false;
		else return true;
	}
	void tozalash(){ i = 0; }// bu yerda contenerni tozaladik;
	~contener(){ delete a; };// bu destruktor programma yopilganda a massivni uchiradi; 
};
int main()
{
	contener<int>a;
	a.O_Element_qush(13);
	a.tozalash();
	a.O_Element_uchir();
	cout << a.Element_soni() << endl;
	a.index_bn_olish(6);
	cout << a.bushmi() << endl;
	contener<string>x;
	x.O_Element_qush("salom");
	cout << x.index_bn_olish(1) << endl;
	cout << x.bushmi() << endl;
	system("pause");
}

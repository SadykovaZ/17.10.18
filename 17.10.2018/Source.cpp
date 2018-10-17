#include<iostream>
#include<string>
using namespace std;
//class number
//{
//public:
//	int num;
//};
//
//class A
//{
//	number n;//вложеный обьект
//
//};
class human
{
	char* name;
	int age;
public:
	human(const char* n)
	{
		name = new char[100];
	}
	~human()
	{
		delete name;
	}

	human(const human &obj)
	{
		this->name = new char[strlen(obj.name) + 1];
		////пока ничего нет кроме оболочки
		//name=new char[strlen(obj.name)+1];
		//strcpy_s(name, strlen(obj.name) + 1, obj.name);
		//
		//age=obj.age;
	}
};
//


void f(human &g)
{

}
human get_vasya()
{
	human h("vasya");
	return h;
}

class string
{
	char* str = new char[10];;


};
class drob
{
public:
	int x, y;
	drob(const drob&obj)
	{
		this->x = obj.x;
		this->y = obj.y;
	}
	drob(int x=0, int y=1)
	{
		/*this->x = x;
		(*this).x = x;
*/
	}
};
void main()
{
	int *num = new int[4] {1,2,3,4};
	cout << num;
	cout << *num;
	cout << num[3];

	drob *arr = new drob[4];
	arr[0].x = 5;
	arr[0].y = 7;
	(arr+1)->x = 8;




	drob *d = new drob;
	(*d).x = 5;
	d->x = 5;

	drob d2;
	d2.x = 5;
	//int z = 5;
	////инициализация при создании
	//int a = z;
	//cout << a;
	human h("Pt");
	//передача обьекта в функцию по значению
	//f(h);
	//инициализация при создании
	human h2 = h;
	human h2(h);
	//возврат обьекта из функции по значению
	human vasya = get_vasya();
}
#include<iostream>
using namespace std;


class Entity
{
public:
	float x, y;
	/*constructor are the special method of a class which is been call with every new instance 
	of class is created or object is created*/
	Entity(float x1, float y1)
	{
		x = x1;
		y = y1;
	}
	Entity()
	{
		x = 0.0f;
		y = 0.0f;
		cout << "created Entity"<< endl;
	}
	/*destructors are the special method of a class which is been call with every 
	instance of class is been distroyed or object is deleted*/
	~Entity()
	{
		cout << "deleted Entity"<< endl;
	}
	void print() 
	{
		cout << x << "," << y << endl;
	}
};
void func1()
{
	Entity e;
	e.print();
}
void func2()
{
	Entity e1(10, 20);
	e1.print();
}

int main()
{
	func1();
	func2();
//	printf("%d",printf("hello"));
}
#include<iostream>

#include"using.h"

class Entity
{
public:
virtual	string print()
	{
		return "Entity";
	}
};

class Player :public Entity
{
private:
	string m_name;
public:
	Player(const string& name)
		:m_name(name){}
	string print() override
	{
		return m_name;
	}
};

int main()
{
	Entity* p = new Entity();
	cout << p->print()<<endl;
	Player x("aditya");
	cout << x.print()<<endl;
}
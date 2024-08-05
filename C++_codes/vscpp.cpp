#include<iostream>
#include"Log.h"

#include"using.h"

int Multiply(int a, int b)
{
	Log("MULTIPLY");
	return a * b;
}

class Player
{
     public:
		 int x, y;
		 int speed;

		 void move(int xa, int ya)
		 {
			 x += xa*speed;
			 y += ya*speed;
		 }
};


int main()
{
	//string s = "aditya";
	//for (char c : s)
	//{
	//	cout << c << endl;
	//}
	Player player;
	player.x = 5;
	player.y = 10;
	player.speed = 5;
	player.move(6, 6);
	cout << player.x << " " << player.y << " " << player.speed << endl;
	cout<<Multiply(10,20)<<endl;
	cin.get();
	return 0;
}
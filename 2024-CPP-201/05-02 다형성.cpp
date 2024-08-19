#include <iostream>
#include <string>

using namespace std;


class Animal {
public:
	void bark() 
	{
		cout << "잘 짖는다" << endl;
	}

	void sleep()
	{
		cout << "잘 잔다" << endl;
	}

	void eat()
	{
		cout << "잘 먹는다" << endl;
	}

private:
	string name;
	unsigned int age;
};

void main(void)
{
	Animal* ani = new Animal();
	ani->bark();
	ani->eat();
	ani->sleep();

	delete ani;
}
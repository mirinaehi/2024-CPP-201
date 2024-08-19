#include <iostream>
#include <string>

using namespace std;


class Animal {
public:
	Animal(string name, unsigned int age)
		: name_(name), age_(age)
	{
		cout << "이름 " << name_ << endl;
		cout << "나이 " << age_ << endl;
	}
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
	string name_;
	unsigned int age_;
};


class Human : public Animal {
public:

private:
	bool right_;
};


void main(void)
{
	Animal* ani = new Animal("정민레이디", 18);
	ani->bark();
	ani->eat();
	ani->sleep();

	delete ani;
}
#include <iostream>
#include <string>

using namespace std;

class Clothes {
public:
	Clothes(string name, int price, int making_time, int beauty)
		: name_(name), price_(price), making_time_(making_time), beauty_(beauty)
	{}

	virtual void show()
	{
		cout << "이름 : " << name_ << endl;
		cout << "가격 : " << price_ << endl;
		cout << "만드는시간 : " << making_time_ << endl;
		cout << "아름다움 : " << beauty_ << endl;
	}

	// 자식 클래스에서 구현하겠다
	virtual void attack(Clothes* target) = 0;
	

	string name_;
	int price_;
	int making_time_;
	int beauty_;
};

class Hanbok : public Clothes {
public:
	Hanbok(string name, int price, int making_time, int beauty
		, int norigae, int jugori)
		: Clothes(name, price, making_time, beauty), norigae_(norigae), jugori_(jugori)
	{}

	void show()
	{
		Clothes::show();
		cout << "노리개 : " << norigae_ << endl;
		cout << "저고리 : " << jugori_ << endl;
	}

	void attack(Clothes* target)
	{
		target->beauty_ -= beauty_;
	}

	int norigae_;			// 노리개
	int jugori_;			// 저고리
};

class Kimono : public Clothes {
public:
	Kimono(string name, int price, int making_time, int beauty, int belt)
		: Clothes(name, price, making_time, beauty), belt_(belt)
	{}

	void show()
	{
		Clothes::show();
		cout << "오비 : " << belt_ << endl;
	}

	void attack(Clothes* target)
	{
		target->beauty_ -= beauty_;
	}

	int belt_;				// 오비
};

class Chipao :public Clothes {
public:
	Chipao(string name, int price, int making_time, int beauty, int embroidery)
		: Clothes(name, price, making_time, beauty), embroidery_(embroidery)
	{}

	void show()
	{
		Clothes::show();
		cout << "자수 : " << embroidery_  << endl;
	}

	void attack(Clothes* target)
	{
		target->beauty_ -= beauty_;
	}

	int embroidery_;
};

void main(void)
{
	Clothes* player = new Hanbok("곤룡포", 100, 10, 9999, 0, 0);
	Clothes* chingu = new Kimono("나마에와", 10, 1, 9, 1);

	player->show();
	chingu->show();

	cout << "----------------------------------" << endl;
	cout << "1. 공격" << endl;
	cout << "2. 특수공격1" << endl;
	cout << "3. 특수공격2" << endl;
	cout << "4. 도망" << endl;
	


	delete chingu;
	delete player;
}
#include <iostream>
#include <string.h>
using namespace std;

class Student {
public:
	// ex) name: "윤주영"
	Student(int hakbun, const char* name) 
		: hakbun_(hakbun)
	{
		this->hakbun_ = hakbun;
		// 동적할당
		name_ = new char[18];
		// 동적할당된 위치(name_)에 "윤주영"(name)을 복사한다
		strcpy(name_, name);
		cout << "생성자 호출 완료" << endl;
	}

	Student() {}


	Student(const Student& rhs)
		 : hakbun_(rhs.hakbun_)
	{
		// 널문자 공간을 위해 +1
		name_ = new char[strlen(rhs.name_)+1];
		strcpy(name_, rhs.name_);
		cout << "복사생성자 호출" << endl;
	}

	// 소멸자 : 객체가 사라질 때(메모리 공간이 해제될 때) 호출되는 함수
	~Student()
	{
		delete []name_;
		cout << "소멸자 호출 완료" << endl;
	}

	void print(void) {
		cout << hakbun_ << " " << name_ << endl;
	}
private:
	
	int hakbun_;
	char* name_;
};

void main(void)
{
	Student stu = Student(2115, "윤주영");
	Student stu2 = stu;
	
}
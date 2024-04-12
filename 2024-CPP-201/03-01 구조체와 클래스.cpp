#include <iostream>
#include <string>
using namespace std;

// 클래스는 디폴트가 private
class Student {
public:
	// 생성자 : 객체를 생성할 때 호출되는 함수
	// 생성자는 반환형이 없다.
	Student(int hakbun, string name) 
		: hakbun_(hakbun), name_(name)
	{
		// this: 객체 자기자신을 가리키는 포인터
		this->hakbun_ = hakbun;
	}

	// 생성자 오버로딩
	Student()
		: hakbun_(2121), name_("JWP")
	{
	}

	// 객체의 멤버를 출력하는 함수
	void print(void) {
		cout << hakbun_ << " " << name_ << endl;
	}
private:
	
	int hakbun_;
	string name_;
};

void main(void)
{
	Student* stu = new Student[3]{
		{2115, "윤주영"},
		{2121, "JWP"},
		{2104, "위즈덤"}
	};

	for(int i=0; i<3; i++)
		stu[i].print();

	// 동적할당된 배열 삭제
	delete []stu;
}
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
	// 동적할당 : heap 영역에 할당. 실행시간(run time)에 메모리 크기 결정
	Student* juyoung = new Student(2115, "윤주영");
	// 정적할당 : stack 영역에 할당. 컴파일 시간에 메모리 크기 결정
	Student jwp = Student();

	(*juyoung).print();
	jwp.print();

	// 동적할당된 메모리 해제
	delete juyoung;
}
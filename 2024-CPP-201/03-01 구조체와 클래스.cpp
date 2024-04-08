#include <iostream>
#include <string>
using namespace std;

// 클래스는 디폴트가 private
class Student {
	int hakbun_;
	string name_;
};

void main(void)
{
	Student juyoung;

	juyoung.hakbun_ = 2115;
	juyoung.name_ = "윤주영";
}
#include <iostream>
#include <string>
using namespace std;

// 구조체는 디폴트가 public
struct Student {
	int hakbun_;
	string name_;
};

void main(void)
{
	struct Student juyoung;

	juyoung.hakbun_ = 2115;
	juyoung.name_ = "윤주영";
}
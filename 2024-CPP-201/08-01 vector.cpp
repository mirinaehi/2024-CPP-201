#include <iostream>
#include <vector>
#include <string>

using namespace std;

void main(void)
{
	vector<string> cy;

	// 미리 벡터의 크기를 지정하는 것이 좋다(성능 이슈)
	cy.reserve(100);

	// 요소 추가
	cy.push_back("채연");
	cy.push_back("해인");
	cy.push_back("우석");
	cy.push_back("덱스");
	cy.push_back("정국");

	// 요소 접근
	cout << cy[0] << "의 퍼스트 : " << cy.at(1) << endl;
	cout << cy.at(0) << "의 세컨드 : " << cy[2] << endl;

	// 요소 수정
	cy[1] = "석진";

	// 요소 갯수(size)
	cout << cy[0] << "의 남자들★★★★★★" << endl;
	for (int i = 1; i < cy.size(); i++)
		cout << cy[i] << endl;

	// 마지막 요소 삭제
	cy.pop_back();
	cout << cy[0] << "의 남자들★★★★★" << endl;
	
	// vector<string>::iterator iter;
	for (auto iter = cy.begin(); iter != cy.end(); iter++)
		cout << *iter << endl;


}

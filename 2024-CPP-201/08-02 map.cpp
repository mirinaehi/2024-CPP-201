#include <iostream>
#include <map>
#include <string>

using namespace std;

void main(void)
{
	map<string, int> guardian;
	
	// 요소 추가
	guardian["김신"] = 939;
	guardian["지은탁"] = 19;
	guardian["저승사자"] = 300;
	guardian["써니"] = 29;
	guardian["유덕화"] = 25;


	// 요소 접근
	cout << "김신의 나이 : " << guardian["김신"] << endl;
	cout << "저승사자의 나이 : " << guardian["저승사자"] << endl;

	// 요소 수정
	guardian["지은탁"] = 29;

	// 요소 갯수(size)
	cout << guardian.size() << endl;

	// 모든 요소 출력(first:key, second:value)
	map<string, int>::iterator iter;
	for (iter = guardian.begin(); iter != guardian.end(); iter++)
		cout << iter->first << "는 " << iter->second << "살" << endl;


}

#include <algorithm>
#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>

using std::cin; using std::sort;
using std::cout; using std::streamsize;
using std::endl; using std::string;
using std::setprecision; using std::vector;

int main()
{
	vector<string> name; // 이름을 저장하는 벡터
	vector<double> homework; // 평균 점수를 저장하는 벡터
	string n;

	cout << "Please enter your name: ";	
	while(cin >> n)
	{
		if(n=="end") break; // "end"가 입력되면 종료하고 결과 출력
		name.push_back(n);

		// 점수 3개를 받아서 평균내기
		cout << "Enter 3 homework grades : ";
		double fir, sec, thi, res;	
		cin >> fir >> sec >> thi;
		res = (fir+sec+thi)/3;

		homework.push_back(res);
		cout << endl;

		cout << "Please enter your name: ";	
	}

	cout << endl << "Result " << endl;

	vector<double>::size_type size = homework.size();
	streamsize prec = cout.precision();

	for(int i=0; size > i; i++) // 벡터에 저장된 크기 만큼 반복
	{
		cout << name[i] << " = " 
		<< setprecision(3) << homework[i] << endl;
	}
	
	cout << setprecision(prec);

	return 0;
}

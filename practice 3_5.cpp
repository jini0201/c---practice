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
	vector<string> name; // �̸��� �����ϴ� ����
	vector<double> homework; // ��� ������ �����ϴ� ����
	string n;

	cout << "Please enter your name: ";	
	while(cin >> n)
	{
		if(n=="end") break; // "end"�� �ԷµǸ� �����ϰ� ��� ���
		name.push_back(n);

		// ���� 3���� �޾Ƽ� ��ճ���
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

	for(int i=0; size > i; i++) // ���Ϳ� ����� ũ�� ��ŭ �ݺ�
	{
		cout << name[i] << " = " 
		<< setprecision(3) << homework[i] << endl;
	}
	
	cout << setprecision(prec);

	return 0;
}

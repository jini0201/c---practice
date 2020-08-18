#include <algorithm> 
#include <iostream>
#include <string>
#include <vector>

using std::cin; using std::sort;
using std::cout;
using std::endl; using std::string;
using std::vector;

int main()
{
	cout << "Please enter the words : " << endl;

	vector<string> word;
	string x;
	while(cin >> x)
	{
		
		if(x=="end") break;
		word.push_back(x);
	}

	vector<string>::size_type size = word.size();

	if(size == 0)
	{
		cout << endl << "You must enter the words. " << endl;
		return 1;
	}

	cout << endl << "Result " << endl;

	sort(word.begin(), word.end());

	int cnt=0;
	string temp;
	temp = word[0];

	for(int i=0; size>i ; i++)
	{
		
		if(temp==word[i])
			cnt++;
		else
		{
			cout << temp << " is " << cnt << endl;
			cnt = 1;
		}

		temp = word[i];
	}

	cout << temp << " is " << cnt << endl;

}

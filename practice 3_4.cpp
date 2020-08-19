#include <algorithm> 
#include <iostream>
#include <string>
#include <vector>

using std::cin; using std::sort;
using std::cout;
using std::endl; using std::string;
using std::vector;

bool compare(string n, string m)
{
	return n.length() < m.length();
}

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
	if(size<2)
	{
		cout << endl << "You must enter at least 2 words." << endl;
		return 1;
	}

	sort(word.begin(), word.end(), compare);
	
	char ch_l[100], ch_s[100];
 	strcpy(ch_s,word[0].c_str());
	strcpy(ch_l,word[size-1].c_str());

	cout << endl;
	cout << "The length of the shortest word is " << strlen(ch_s) << endl;
	cout << "The length of the longest word is " << strlen(ch_l) << endl;
	

	return 0;

}

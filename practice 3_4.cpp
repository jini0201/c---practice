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
	return n.length() < m.length(); // 문자열의 길이를 비교하여 짧은 것에서 긴 것으로
}

int main()
{
	cout << "Please enter the words : " << endl;

	vector<string> word;
	string x;

	while(cin >> x) // "end"가 입력 될때까지 벡터에 저장
	{
		if(x=="end") break;
		word.push_back(x);		
	}

	vector<string>::size_type size = word.size();
	if(size<2) // 입력된 단어가 2개보다 작을 경우
	{
		cout << endl << "You must enter at least 2 words." << endl;
		return 1;
	}

	sort(word.begin(), word.end(), compare); // 벡터의 처음부터 끝까지 compare 기준으로 비교 정렬
	
	// string 타입을 char 타입으로 변환 (strlen 함수 사용을 위해)
	char ch_l[100], ch_s[100];
 	strcpy(ch_s,word[0].c_str()); // 길이가 가장 짧은 문자열을 ch_s 변수에 넣음 
	strcpy(ch_l,word[size-1].c_str()); // 길이가 가장 긴 문자열을 ch_l 변수에 넣음 
	
	// 문자열의 길이 출력
	cout << endl;
	cout << "The length of the shortest word is " << strlen(ch_s) << endl;
	cout << "The length of the longest word is " << strlen(ch_l) << endl;
	

	return 0;

}

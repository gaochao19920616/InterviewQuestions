#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	string s="We are programmers, and we are wrting bugs.";
	vector<int>num; 
	
	for(int i=0;i<s.size();i++)
		if (s[i]==' ')
			num.push_back(i);
	if(!num.empty())
		reverse(s.begin(),s.begin()+num[0]);
	for(int i=1;i<num.size();i++)
		reverse(s.begin()+num[i-1]+1,s.begin()+num[i]);
	reverse(s.begin()+num[num.size()-1]+1,s.end());
	
	cout<<s;
	return 0;
} 

#include <iostream>
#include <string>
using namespace std;

string al[] = {"aespa","baekjoon","cau","debug","edge",
"firefox","golang","haegang","iu","java","kotlin","lol","mips",
"null","os","python","query","roka","solvedac","tod","unix",
"virus","whale","xcode","yahoo","zebra"};

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	string s, ans;
	cin >> s;
	
	for(int i=0; i<s.size(); i++) {
		char c = s[i];
		int tmp = al[c-'a'].size();
		
		if(s.substr(i,tmp) != al[c-'a']) {
			cout << "ERROR!";
			return 0;
		}
		ans.push_back(c);
		i+=tmp-1;
	}
	
	cout << "It's HG!\n" << ans;
	
	
	return 0;
}
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	string s;
	cin >> s;
	int flag=0;
	for(int i=0; i<s.size()-1; i++) {
		if(s[i]=='s' && s[i] == s[i+1]) flag++;
	}
	
	if(flag) cout << "hiss";
	else cout << "no hiss";
	
	return 0;
}
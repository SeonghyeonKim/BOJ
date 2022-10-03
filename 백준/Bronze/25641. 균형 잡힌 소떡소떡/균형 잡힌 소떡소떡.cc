#include <iostream>
#include <string>
using namespace std;

int main(void) {
	int N;
	string s;
	cin >> N >> s;
	
	int cnt = 0;
	for(int i=0; i<N; i++) {
		if(s[i]=='s') cnt++;
		else cnt--;
	}
	
	for(int i=0; i<N; i++) {
		if(cnt==0) {
			cout << s.substr(i);
			return 0;
		}
		
		if(s[i]=='s') cnt--;
		else cnt++;
	}
	
	return 0;
}
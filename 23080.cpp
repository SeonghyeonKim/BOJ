#include <iostream>
#include <string>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N;
	string s;
	
	cin >> N >> s;
	
	for(int i=0; i<s.size(); i++) {
		if(i%N==0) {
			cout << s[i];
		}
	}
	
	return 0;
}

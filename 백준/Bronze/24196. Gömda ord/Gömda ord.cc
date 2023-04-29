#include <iostream>
#include <string>
#include <cassert>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int idx=0;
	string s;
	cin >> s;
	
	while(idx < s.size()) {
		cout << s[idx];
		
		idx+= s[idx]-'A'+1;
	}

	
	return 0;
}

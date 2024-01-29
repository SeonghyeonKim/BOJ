#include <iostream>
#include <string>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	string s;
	cin >> s;
	
	for(int i=0; i<s.size(); i++) {
		cout << s[i];
		
		if((s.size()-i-1)%3==0 && i!=s.size()-1) cout << ",";
	}
		
	return 0;
}

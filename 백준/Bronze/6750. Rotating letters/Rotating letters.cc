#include <iostream>
#include <string>
using namespace std;

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

	string s;
	cin >> s;
	
	for(int i=0; i<s.size(); i++) {
		if(s[i]!='I' && s[i]!='O' && s[i]!='S' && s[i]!='H' && s[i]!='Z' && s[i]!='X' && s[i]!='N') {
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
	
    return 0;
}
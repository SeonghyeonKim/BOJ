#include <iostream>
#include <string>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int cnt=0;
	while(!cin.eof()) {
		string s;
		getline(cin, s);
		cnt++;
	}
	
	cout << cnt-1;
	
	return 0;	
}
		

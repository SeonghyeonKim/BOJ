#include <iostream>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int T, cnt=1;
	cin >> T;
	
	char tmp = '.';
	while(T--) {
		char c;
		cin >> c;
		
		if(tmp!=c) {
			cnt++;
			tmp = c;
		}
	}
	cout << cnt;
	
	return 0;
}
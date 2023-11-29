#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N;
	cin >> N;
	
	string ans = "ZZZ";
	for(int i=0; i<N; i++) {
		string s;
		cin >> s;
		
		if(s.length() == 3) {
			ans = min(ans, s);
		}
	}
	cout << ans;
	
	return 0;
}
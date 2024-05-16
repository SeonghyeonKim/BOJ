#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	string s;
	cin >> s;
	
	int N, cnt=0;
	cin >> N;
	
	s = s.substr(0, 5);
	for(int i=0; i<N; i++) {
		string a;
		cin >> a;
		
		if(a.substr(0,5) == s) cnt++;
	}
	cout << cnt;
	
	return 0;
}

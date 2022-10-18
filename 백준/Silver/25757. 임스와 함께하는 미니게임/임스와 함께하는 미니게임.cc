#include <iostream>
#include <set>
#include <string>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N;
	char c;
	cin >> N >> c;
	
	int cnt = 0;
	set<string> se;
	for(int i=0; i<N; i++) {
		string s;
		cin >> s;
		
		if(se.find(s)==se.end()) {
			se.insert(s);
			cnt++;	
		}
	}

	if(c=='Y') cout << cnt;
	else if(c=='F') cout << cnt/2;
	else cout << cnt/3;
	
	return 0;
}
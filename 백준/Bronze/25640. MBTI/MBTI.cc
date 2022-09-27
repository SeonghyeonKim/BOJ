#include <iostream>
#include <string>
using namespace std;

int main(void) {
	int N;
	string s;
	cin >> s >> N;
	
	int cnt = 0;
	for(int i=0; i<N; i++) {
		string tmp;
		cin >> tmp;
		
		if(s==tmp) cnt++;
	}
	cout << cnt;
	
	return 0;
}
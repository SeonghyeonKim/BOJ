#include <iostream>
#include <string>
using namespace std;

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

	int N;
	cin >> N;
	
	int cnt = N;
	for(int i=0; i<N; i++) {
		string s;
		cin >> s;
		
		for(int j=1; j<s.size(); j++) {
			if(s[j-1]=='C' && s[j]=='D') {
				cnt--;
				break;
			}
		}
	}
	cout << cnt;
	
    return 0;
}
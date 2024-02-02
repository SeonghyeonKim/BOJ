#include <iostream>
#include <string>
using namespace std;

int alpha[26];

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	string s;
	cin >> N >> s;
	
	for(int i=0; i<N; i++) {
		alpha[s[i]-'a']++;		
	}
	
	int ans, cnt=0;
	for(int i=0; i<26; i++) {
		if(alpha[i] > cnt) {
			cnt = alpha[i];
			ans = i;
		}
	}
	cout << char(ans + 'a') << " " << cnt;

	return 0;
}

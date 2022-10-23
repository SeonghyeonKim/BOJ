#include <iostream>
#include <string>
using namespace std;

int alpha[26][200001];

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	string s;
	cin >> s;
	
	int N;
	cin >> N;
	
	for(int i=1; i<=s.size(); i++) {
		for(int j=0; j<26; j++) {
			if(s[i-1]-'a'==j) alpha[j][i] = alpha[j][i-1]+1;
			else alpha[j][i] = alpha[j][i-1];
		}
	}
	
	for(int i=0; i<N; i++) {
		char a;
		int b, c;
		cin >> a >> b >> c;
		
		cout << alpha[a-'a'][c+1] - alpha[a-'a'][b] << "\n";
	}
	
	return 0;
}
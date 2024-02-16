#include <iostream>
#include <string>
using namespace std;

int main(void) {
	cin.tie(NULL);
    ios_base::sync_with_stdio(false);
	
	int N, D;
	cin >> N >> D;
	
	for(int i=0; i<N; i++) {
		string s;
		cin >> s;
		
		if(D==1) {
			for(int i=0; i<s.size(); i++) {
				if(s[i]=='d') cout << 'q';
				else if(s[i]=='b') cout << 'p';
				else if(s[i]=='q') cout << 'd';
				else cout << 'b';
			}
		}
		else {
			for(int i=0; i<s.size(); i++) {
				if(s[i]=='d') cout << 'b';
				else if(s[i]=='b') cout << 'd';
				else if(s[i]=='q') cout << 'p';
				else cout << 'q';
			}
		}
		cout << "\n";
	}
	
    return 0;
}


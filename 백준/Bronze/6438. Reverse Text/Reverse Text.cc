#include <iostream>
#include <string>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N;
	cin >> N;
	cin.ignore();
	
	for(int i=0; i<N; i++) {
		string s;
		getline(cin, s);
		
		for(int t=s.size()-1; t>=0; t--) {
			cout << s[t];
		}
		cout << "\n";
	}
	
	return 0;
}
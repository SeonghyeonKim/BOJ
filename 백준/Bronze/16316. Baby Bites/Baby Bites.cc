#include <iostream>
#include <string>
using namespace std;

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

	int N;
	cin >> N;
	
	for(int i=1; i<=N; i++) {
		string s;
		cin >> s;
		
		if(s=="mumble") continue;
		else {
			int tmp=0;
			for(int j=0; j<s.size(); j++) {
				tmp = tmp*10 + (s[j]-'0');
			}	
			if(tmp != i) {
				cout << "something is fishy";
				return 0;
			}
		}
	}
	cout << "makes sense";
	
    return 0;
}
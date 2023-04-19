#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

	int N;
	string s;
	cin >> N >> s;
	
	int si = 1;
	while(si <= N) {
		int tmp = 0;
		
		for(int i=0; i<si; i++) {
			if(s[i]!=s[N-si+i]) tmp++;	
		}
		
		if(tmp==1) {
			cout << "YES";
			return 0;
		} 
		
		si++;
	}

	cout << "NO";
	
 	return 0;
}

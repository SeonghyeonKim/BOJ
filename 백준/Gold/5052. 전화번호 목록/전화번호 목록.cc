#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	cin.tie(NULL);
    ios_base::sync_with_stdio(false);
	
	int T;
	cin >> T;
	
	while(T--) {
		int N, flag=0;
		cin >> N;
		
		vector<string> v(N);
		
		for(int i=0; i<N; i++) 
			cin >> v[i];
			
		sort(v.begin(), v.end());
		
		for(int i=0; i<N-1; i++) {
			if(v[i] == v[i+1].substr(0, v[i].size())) flag=1;
		}
		
		if(flag) cout << "NO\n";
		else cout << "YES\n";
	}
		
	return 0;
}
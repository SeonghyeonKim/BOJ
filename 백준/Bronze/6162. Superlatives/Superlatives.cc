#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	// cin.tie(NULL);
	// ios_base::sync_with_stdio(false);
	
	int T;
	cin >> T;
	
	for(int t=1; t<=T; t++) {
		int a, b;
		cin >> a >> b;
		
		int cnt = 0;
		for(int i=b; i<a; i*=5) {
			cnt++;
		}
		
		printf("Data Set %d:\n", t);
		if(cnt==0) printf("no drought\n\n");
		else {
			for(int i=1; i<cnt; i++) printf("mega ");
			printf("drought\n\n");
		}
	}
	  
	return 0;
}

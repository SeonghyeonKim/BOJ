#include <iostream>
using namespace std;

int main(void) {
	int t=1;
	while(t) {
		int n;
		cin >> n;
		
		if(!n) break;
		
		int a;
		for(int i=0; i<n; i++) cin >> a;
		
		cout << "Case " << t << ": Sorting... done!\n";
		t++;
	}
	
	return 0;
}
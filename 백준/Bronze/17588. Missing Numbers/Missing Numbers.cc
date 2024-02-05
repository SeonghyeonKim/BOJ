#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

	int N, tmp=0, f=1;
	cin >> N;
	
	for(int i=0; i<N; i++) {
		int a;
		cin >> a;
		
		if(tmp+1 < a) {
			f=0;
			for(int j=tmp+1; j<a; j++) cout << j << "\n";
		}
		
		tmp = a;
	}
	
	if(f) cout << "good job";
	
    return 0;
}
#include <iostream>
#include <string>
#include <cmath>
#include <stack>
#include <vector>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	while(1) {
		int N;
		cin >> N;
		
		if(N==0) break;
		
		int ans=0;
		for(int i=0; i<N; i++) {
			int a;
			cin >> a;
			ans+=a;
		}
		
		cout << "Mary won " << N-ans <<" times and John won " << ans << " times\n";
	}
	
	return 0;
}

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N, ans=0;
	cin >> N;
	
	for(int i=0; i<N; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		
		if(a!=-1) {
			if(b==-1 && c==-1) ans++;
			else if(b!=-1 && c==-1) {
				if(a <= b) ans++;
			}
			else if(b!=-1 && c!=-1) {
				if(a<=b && b<=c) ans++;
			}
		}
	}
	cout << ans;
	
	return 0;
}
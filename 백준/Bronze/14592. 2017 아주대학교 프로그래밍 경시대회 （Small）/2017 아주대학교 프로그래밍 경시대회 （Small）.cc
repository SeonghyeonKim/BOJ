#include <iostream>
#include <string>
#include <cmath>
#include <stack>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int T;
	cin >> T;
	
	int ans=0, ansa=0, ansb=0, ansc=0;
	for(int i=1; i<=T; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		
		if(ansa < a) {
			ans = i;
			ansa = a;
			ansb = b;
			ansc = c;
		}
		else if(ansa == a) {
			if(ansb > b) {
				ans = i;
				ansa = a;
				ansb = b;
				ansc = c;
			}
			else if(ansb == b) {
				if(ansc > c) {
					ans = i;
					ansa = a;
					ansb = b;
					ansc = c;
				}
			}
		}
	}
	cout << ans;
		
	return 0;
}

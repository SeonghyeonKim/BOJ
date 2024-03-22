#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int A, B, ans=1;
	cin >> A >> B;
	
	while(1) {
		if(A > B) {
			cout << -1;
			break;
		}
		
		if(A == B) {
			cout << ans;
			break;
		}
		
		if(B%10 == 1) {
			B/=10;
		} 
		else if(B%2==0) {
			B/=2;
		}
		else {
			cout << -1;
			break;
		}
		ans++;
	}
	
	return 0;
}


#include <iostream>
#include <string>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	long long N;
	cin >> N;
	
	long long ans=N/5;
	while(1) {
		if(ans*5 + ((N-ans*5)/3)*3 == N) {
			cout << ans+(N-ans*5)/3;
			break;
		}
		ans--;
		
		if(ans<0) {
			cout << -1;
			break;
		}
	}
	
	return 0;
}

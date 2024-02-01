#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int T;
	cin >> T;
	
	while(T--) {
		int N, ans=0;
		cin >> N;
		
		while(N--) {
			int a;
			cin >> a;
			ans+=a;
		}
		
		if(ans>0) cout << "Right\n";
		else if(ans==0) cout << "Equilibrium\n";
		else cout << "Left\n";
	}

	return 0;
}
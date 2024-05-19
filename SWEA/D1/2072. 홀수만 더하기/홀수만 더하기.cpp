#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N;
	cin >> N;
	
	for(int t=1; t<=N; t++) {
		int ans=0;
		for(int i=0; i<10; i++) {
			int a;
			cin >> a;
			
			if(a%2) ans+=a;
		}
		
		cout << "#" << t << " " << ans << "\n";
	}
	
	return 0;
}
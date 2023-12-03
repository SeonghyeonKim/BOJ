#include <iostream>
#include <vector>
#define ll long long
using namespace std;

ll v[200001][2];

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    ll N, Q, sum=0;
    cin >> N;
    for(int i=1; i<=N; i++) {
    	cin >> v[i][0];
		sum += v[i][0];
	}
	cout << sum << "\n";

	cin >> Q;
	while(Q--) {
		ll a, b;
		cin >> a;
		
		if(a==2) {
			cin >> b;
			if(v[b][1]) {
				sum += v[b][0];
				v[b][1] = 0;
			}
			else {
				sum -= v[b][0];
				v[b][1] = 1;				
			}
			
			cout << sum << "\n";
		}
		else {
			cin >> a >> b;
			if(v[a][1]==0) sum += b - v[a][0];
			v[a][0] = b;
			
			cout << sum << "\n";
		}
	}
    
    return 0;
}
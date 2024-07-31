#include <iostream>
#include <vector>
using namespace std;

struct lo {
	long long gain, lose;
};

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

	int T;
	cin >> T;
	
	while(T--) {
		int n, m;
		cin >> n >> m;
		
		vector<lo> v(n+1);		
		for(int i=0; i<m; i++) {
			long long a, b, p, q;
			cin >> a >> b >> p >> q;
			
			// 득점
			v[a].gain += p; 
			v[b].gain += q;
			
			// 실점
			v[a].lose += q;
			v[b].lose += p;
		}
		
		long long mx=0, mn=987654321;
		for(int i=1; i<=n; i++) {
			long long g = v[i].gain;
			long long l = v[i].lose;
			
			if(g==0 && l==0) {
				mx = max(mx, 0LL);
				mn = min(mn, 0LL);
				continue;
			}
			
			mx = max(mx, (g*g*1000) / (g*g + l*l));
			mn = min(mn, (g*g*1000) / (g*g + l*l));
		}
		
		cout << mx << "\n" << mn << "\n";
	}
		
    return 0;
}

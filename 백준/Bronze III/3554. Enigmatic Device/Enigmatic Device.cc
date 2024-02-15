#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N, M;
	cin >> N;
	
	vector<int> v(N+1);
	long long sum=0;
	for(int i=1; i<=N; i++) 
		cin >> v[i];
	
	cin >> M;
	while(M--) {
		int a, b, c;
		cin >> a >> b >> c;
		
		if(a==1) {
			for(int i=b; i<=c; i++) {
				v[i] = (v[i]*v[i])%2010;
			}
		}
		else {
			long long sum=0;
			for(int i=b; i<=c; i++) {
				sum += v[i];
			}
			cout << sum << "\n";
		}
	}
	
	return 0;
}


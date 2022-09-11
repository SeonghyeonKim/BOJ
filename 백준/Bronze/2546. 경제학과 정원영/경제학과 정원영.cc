#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int T;
	cin >> T;
	
	while(T--) {
		long long int suma=0, sumb=0;
		int N, M;
		
		cin >> N >> M;
		
		vector<int> a(N);
		for(int i=0; i<N; i++) {
			cin >> a[i];
			suma += a[i];
		}
		
		for(int i=0; i<M; i++) {
			int tmp;
			cin >> tmp;
			sumb+=tmp;
		}
		
		double ava = suma/1.0/N;
		double avb = sumb/1.0/M;
		
		int cnt = 0;
		for(int i=0; i<N; i++) {
			if(a[i]<ava && a[i]>avb) cnt++;
		}
		
		cout << cnt << "\n";
	}
	
	return 0;
}
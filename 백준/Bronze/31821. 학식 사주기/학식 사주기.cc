#include <iostream>
#include <vector>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N, M, sum=0;
	cin >> N;
	
	vector<int> v(N+1);
	for(int i=1; i<=N; i++) cin >> v[i];
	
	cin >> M;
	for(int i=0; i<M; i++) {
		int a;
		cin >> a;
		
		sum += v[a];
	}
	cout << sum;
	
	return 0;
}

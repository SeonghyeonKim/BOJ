#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>
#define pii pair<int, int>
#define MOD 1000000007
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N;
	cin >> N;
	
	vector<int> v(N);
	for(int i=0; i<N; i++) cin >> v[i];
	
	sort(v.begin(), v.end());
	
	int cnt=1, tmp=v[0];
	for(int i=0; i<N; i++) {
		if(v[i] >= tmp*2) {
			tmp = v[i];
			cnt++;
		}
	}
	cout << cnt;
	
	return 0;
}

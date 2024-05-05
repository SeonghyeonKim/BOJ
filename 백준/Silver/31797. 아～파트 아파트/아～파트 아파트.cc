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
	
	int N, M;
	cin >> N >> M;
	
	int tmp = (N-1) % (M*2);
	
	vector<pii> v;
	for(int i=1; i<=M; i++) {
		int a, b;
		cin >> a >> b;
		
		v.push_back({a, i});
		v.push_back({b, i});
	}
	
	sort(v.begin(), v.end());
	
	cout << v[tmp].second;
	
	return 0;
}
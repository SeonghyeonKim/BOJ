#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <string>
#define ll long long
#define piv pair<int, vector<int> >
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int a, b, k, x;
	cin >> a >> b >> k >> x;
	
	int cnt = max(min(b, k+x) - max(a, k-x) + 1, 0);
	
	if(cnt) cout << cnt;
	else cout << "IMPOSSIBLE";
	
	return 0;
}
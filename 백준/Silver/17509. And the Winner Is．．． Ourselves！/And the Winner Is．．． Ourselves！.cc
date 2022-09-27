#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(pair<int, int> a, pair<int, int> b) {
	return a.first < b.first;
}

int main(void) {
	vector<pair<int, int> > v(11);
	for(int i=0; i<11; i++) cin >> v[i].first >> v[i].second;
		
	sort(v.begin(), v.end(), comp);
	
	int ans=0, sum=0;
	for(int i=0; i<11; i++) {
		sum+=v[i].first;
		ans = ans + sum + 20*v[i].second;
	}
	
	cout << ans;
	
	return 0;
}
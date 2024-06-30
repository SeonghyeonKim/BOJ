#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#define psi pair<string, int>
using namespace std;

bool comp(psi a, psi b) {
	return a.second > b.second;
}

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	vector<psi> v(7);
	for(int i=0; i<7; i++) cin >> v[i].first >> v[i].second;
	sort(v.begin(), v.end(), comp);
	cout << v[0].first;
	
	return 0;
}
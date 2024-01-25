#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define pis pair<int, string>
using namespace std;

bool comp(pis a, pis b) {
	return a.first > b.first;
}

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	vector<int> q;
	vector<pis> w;
	for(int i=0; i<3; i++) {
		int a, b;
		string s;
		cin >> a >> b >> s;
	
		q.push_back(b);
		w.push_back({a, s});
	}
	
	sort(q.begin(), q.end());
	sort(w.begin(), w.end(), comp);
	
	cout << (q[0])%100*10000 + (q[1])%100*100 + (q[2])%100 << "\n";
	cout << w[0].second[0] << w[1].second[0] << w[2].second[0];
	
	return 0;
}

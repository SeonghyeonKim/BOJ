#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N;
	cin >> N;
	
	vector<int> v1(N);
	map<int, int> m;
	for(int i=0; i<N; i++) {
		cin >> v1[i];
		m.insert({v1[i], i});	
	}
	
	vector<int> v2 = v1;
	sort(v2.begin(), v2.end());
	
	int cnt = 0;
	for(int i=0; i<N; i++) {
		if(v1[i]!=v2[i]) {
			int cur = i;
			int next = m[v2[cur]];
			
			int tmp = v1[cur];
			v1[cur] = v1[next];
			v1[next] = tmp;
		
			m[v1[next]] = next;
			
			cnt++;
		}
	}
	cout << cnt;
	
	return 0;
}
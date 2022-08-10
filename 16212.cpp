#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N;
	cin >> N;
	
	vector<int> v(N);
	
	for(int i=0; i<N; i++) cin >> v[i];
	
	sort(v.begin(), v.end());
	
	for(int i=0; i<N; i++) cout << v[i] << " ";
	
	return 0;
}

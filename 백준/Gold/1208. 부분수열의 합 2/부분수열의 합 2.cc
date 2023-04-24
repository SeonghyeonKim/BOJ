#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
using namespace std;

long long N, S, cnt;
vector<int> v;
map<int, int> m;

void leftSum(int idx, int sum) {
	if(idx==N/2) {
		m[sum]++;
		return ;
	}
	
	leftSum(idx+1, sum);
	leftSum(idx+1, sum+v[idx]);
}

void rightSum(int idx, int sum) {
	if(idx==N) {
		cnt += m[S-sum];
		return ;
	}
	
	rightSum(idx+1, sum);
	rightSum(idx+1, sum+v[idx]);
}


int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

	cin >> N >> S;
	v.resize(N);
	
	for(int i=0; i<N; i++) cin >> v[i];
	
	leftSum(0, 0);
	rightSum(N/2, 0);

	if(!S) cnt--;
	cout << cnt;
	
 	return 0;
}

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	vector<long long> v(6);
	long long N;
	cin >> N;
	for(int i=0; i<6; i++) cin >> v[i];
	
	long long a = min(v[0], v[5]);
	long long b = min(v[1], v[4]);
	long long c = min(v[2], v[3]);
	
	long long two = min(min(a+b, a+c), b+c);
	long long three = a+b+c;
	
	sort(v.begin(), v.end(), less<long long> ());
	long long one = v[0];
	
	if(N==1) cout << v[0]+v[1]+v[2]+v[3]+v[4];
	else if(N==2) cout << three*4 + two*4;
	else cout << one*(5*N*N-16*N+12) + two*(8*N-12) + three*4;
	
	return 0;
}


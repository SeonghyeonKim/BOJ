#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#define ll long long
using namespace std;

ll gcd(ll a, ll b) {
	if(a%b==0) return b;
	return gcd(b, a%b);
}

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	ll N, ans, tmp;
	cin >> N;
	
	vector<ll> v(N);
	for(int i=0; i<N; i++) cin >> v[i];
	 
	ans = abs(v[1]-v[0]);
	
	for(int i=2; i<N; i+=2) {
		tmp = abs(v[i]-v[i-1]);
		ans = gcd(ans, tmp);
	}
	
	vector<int> answer;
	for(int i=1; i*i<=ans; i++) {
		if(ans%i==0) {
			answer.push_back(i);
			if(i*i!=ans)answer.push_back(ans/i);
		}
	}
	
	sort(answer.begin(), answer.end());
	
	for(int i=1; i<answer.size(); i++) cout << answer[i] << " ";
	
	
	return 0;
}
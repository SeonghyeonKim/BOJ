#include <iostream>
#include <numeric>
#define ll long long
using namespace std;

ll gcd(ll a, ll b) {
	if(a%b==0) return b;
	return gcd(b, a%b);
}

ll lcm(ll a, ll b) {
	return a/gcd(a, b)*b;
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	ll N;
	cin >> N;
	
	ll num=1;
	for(int i=N; i>0; i/=10) {
		if(i%10 > 1) {
			num = lcm(num, i%10);
		}
	}
	
	ll dx=1, dy=0;
	while(1) {
		if((N*dx+dy)%num==0) {
			cout << N*dx+dy;
			return 0;
		}
		
		dy++;
		if(dy == dx) {
			dx*=10;
			dy=0;
		}
	}
	 
	return 0;
}



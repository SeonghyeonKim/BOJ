#include <iostream>
#define ll long long
using namespace std;

int isNotPrime(ll a) {
	if(a==2 || a==3) return 0;
	if(a%2==0 || a%3==0) return 1;
	for(ll i=5; i*i<a; i+=2) {
		if(a%i==0) return 1;
	}
	return 0;
}

ll pow(ll a, ll b, ll p) {
	if(b==0) return 1;
	ll n = pow(a, b/2, p)%p;
	ll tmp = (n*n)%p;
	
	if(b%2==0) return tmp;
	return (a*tmp)%p;
}

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

	while(1) {
		ll a, p;
		cin >> p >> a;
		
		if(p==0 && a==0) break;
		
		if(isNotPrime(p) && pow(a, p, p)%p==a) cout << "yes\n";
		else cout << "no\n";
	} 
	
    return 0;
}
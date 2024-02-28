#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long pow(long long a, long long b) {
	if(b==0) return 1;
	long long n=pow(a, b/2);
	long long temp=n*n%1000000007;
	if(b%2==0) return temp;
	return a*temp%1000000007;
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N;
	cin >> N;
	
	vector<long long> v(N);
	for(int i=0; i<N; i++) {
		cin >> v[i];
	}
	
	sort(v.begin(), v.end());
	
	long long a=0, b=0;
	for(int i=N-1; i>0; i--) {
		long long tmp = pow(2, i)-1;
		a += tmp * v[i];
		b += tmp * v[N-1-i];
		a %= 1000000007;
		b %= 1000000007;
	}
	cout << (a%1000000007 + 1000000007 -b%1000000007) % 1000000007;
	
	return 0;
}

#include <iostream>
using namespace std;

long long prime(long long N) {
	if(N==1 || N==2) return 0;
	if(N%2==0) return 2;
	
	for(long long i=3; i*i<=N; i+=2) {
		if(N%i==0) return i;
	}
	return 0;
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	long long N;
	cin >> N;
	
	long long tmp = prime(N);
	if(tmp==0) {
		cout << "koosaga";
		return 0;
	}
	
	N /= tmp;
	tmp = prime(N);
	
	if(tmp==0) cout << "cubelover";
	else cout << "koosaga";
	
	return 0;
}

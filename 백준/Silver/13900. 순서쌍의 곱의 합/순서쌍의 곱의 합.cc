#include <iostream>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N;
	cin >> N;
	
	long long sum=0, sum2=0;
	for(int i=0; i<N; i++) {
		long long a;
		cin >> a;
		
		sum+=a;
		sum2+=a*a;
	}
	
	cout << (sum*sum - sum2)/2;
	
	return 0;
}
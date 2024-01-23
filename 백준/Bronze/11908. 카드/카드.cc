#include <iostream>
#include <string>
#include <cmath>
#include <stack>
#include <vector>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N, tmp=0, sum=0;
	cin >> N;
	for(int i=0; i<N; i++) {
		int a;
		cin >> a;
		sum+=a;
		tmp = max(tmp, a);
	}
	cout << sum-tmp;
	 
	return 0;
}

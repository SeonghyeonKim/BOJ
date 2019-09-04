#include <iostream>
using namespace std;

int comb(int n, int r)
{
	if(r==n || r==0) {
		return 1;
	}
	else if(r==n-1 || r==1) {
		return n;
	}
	else {
		return comb(n-1, r) + comb(n-1, r-1);
	}
}

int main(void)
{
	int T, n, r;
	
	cin >> T;
	
	for(int i; i<T; i++) {
		cin >> r;
		cin >> n;
		
		cout << comb(n,r) << endl;
	}
	
	return 0;
}

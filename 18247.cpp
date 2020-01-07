#include<iostream>
using namespace std;

int main(void)
{
	int T, N, M;
	cin >> T;
	while(T--) {
		cin >> N >> M;
		if(N>=12 && M>=4)
			cout << 11*M+4 << "\n";
		else
			cout << -1 << "\n";
	}
	
	return 0;
}

#include <iostream>
using namespace std;

int main(void)
{
	int C, K, P, sum=0;
	
	cin >> C >> K >> P;
	for(int i=1; i<=C; i++) {
		sum = sum + K*i + P*i*i;
	}
	cout << sum;
	
	return 0;
}

#include<iostream>
using namespace std;

int main(void)
{
	long long int N, sum=0;
	
	cin >> N;
	for(long long int i=1; i<N; i++) {
		sum += i*N+i;
	}
	cout << sum;
	
	return 0;
}

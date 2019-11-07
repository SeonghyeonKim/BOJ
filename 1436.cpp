#include<iostream>
using namespace std;

int main(void)
{
	int i, N, count=0;
	cin >> N;
	
	for(i=666; count!=N; i++) {
		for(int j=i; j>0; j/=10) {
			if(j%1000==666) {
				count++;
				break;
			}
		}
	}
	cout << i-1;
	
	return 0;
}

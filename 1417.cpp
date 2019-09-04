#include <iostream>
using namespace std;

int vote[1000];

int big(int);

int main(void)
{
	int count=0, N=0;
	
	cin >> N;
	for(int i=0; i<N; i++) {
		cin >> vote[i];
	}
	while(big(N)!=0) {
		vote[big(N)]--;
		vote[0]++;
		count++;
	}
	
	cout << count;
	
	return 0;
}

int big(int n) {
	int r=0;
	
	for(int i=0; i<n; i++) {
		if(vote[i]>=vote[r]) r=i;
	}
	
	return r;
}

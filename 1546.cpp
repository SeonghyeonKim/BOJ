#include<iostream>
using namespace std;

int main(void)
{
	int N, n[1000], i, num=0, sum=0;
	
	cin >> N;
	for(i=0; i<N; i++) {
		cin >> n[i];
	}
	
	for(i=0; i<N; i++) {
		sum=sum+n[i];
		if(n[i]>num)
			num=n[i];
	}
	
	cout << (float)sum/N/num*100;
		
	return 0;
}	

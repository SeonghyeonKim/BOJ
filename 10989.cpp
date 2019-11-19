#include<iostream>
using namespace std;

int main(void)
{
	int a;
	long long int num[10001]={0,}, N;
	cin >> N;
	for(int i=0; i<N; i++) {
		cin >> a;
		num[a]++;
	}
	for(int i=0; i<10001; i++) {
		while(num[i]--) {
			cout << i << "\n";
		}
	}
		
	return 0;
}

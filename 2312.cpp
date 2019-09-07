#include<iostream>
using namespace std;

int main(void)
{
	long long T, N;
	
	cin >> T;
	
	for(long long i=0; i<T; i++) {
		cin >> N;
		
		long long divisor = 2;
		while(N>1) {
			int count = 0;
			
			for(; N%divisor==0;) {
				N = N/divisor;
				count++;
			}
			
			if(count!=0) cout << divisor << " " << count << "\n";
			divisor++;
		}
	}
	
	return 0;
}

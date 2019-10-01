#include<iostream>
using namespace std;

int main(void)
{
	int N, count=0;
	cin >> N;
	N=1000-N;
	
	while(N) {
		if(N>500) {
			count++;
			N-=500;
		}
		else if(N>100) {
			count++;
			N-=100;
		}
		else if(N>50) {
			count++;
			N-=50;
		}
		else if(N>10) {
			count++;
			N-=10;			
		}
		else if(N>5) {
			count++;
			N-=5;
		}
		else{
			count++;
			N-=1;
		}
	}
	cout << count;
	
	return 0;
}

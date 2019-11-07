#include<iostream>
using namespace std;

int main(void)
{
	int i, N, sum, judge=0;
	cin >> N;
	
	i=1;
	while(i<=1000000) {
		sum=i;
		for(int j=i; j!=0; j/=10) sum+=j%10;
		if(N==sum) {
			judge=1;
			break;	
		}
		i++;
	}
	if(judge) cout << i;
	else cout << 0; 
	
	return 0;
}

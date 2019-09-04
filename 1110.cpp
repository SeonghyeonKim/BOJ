#include <iostream>
using namespace std;

int main(void)
{
	int N, count=1, num, reg;
	
	cin >> N;
	num = (N%10+N/10)%10+N%10*10;
	
	for(; num!=N; count++) {
		num = (num%10+num/10)%10+num%10*10;
	}	
	
	cout << count;
		
	return 0;
}	


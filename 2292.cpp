#include <iostream>
using namespace std;

int main(void)
{
	long long n, count=0;
	
	cin >> n;
	
	if(n==1)
		count=1;
	else {
		for(n=n-2; n>=0; count++){
			n=n-6*count;
		}
	}
	
	cout << count;
	
	return 0;
}


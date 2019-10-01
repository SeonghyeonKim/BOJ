#include<iostream>
using namespace std;

int main(void)
{
	int X, count=0;
	cin >> X;
	
	for(int i=64; X!=0; i/=2) {
		if(X>=i) {
			count++;
			X-=i;
		}
	}
	
	cout << count;
		
	return 0;
}


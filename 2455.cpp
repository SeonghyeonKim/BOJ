#include<iostream>
using namespace std;

int main(void)
{
	int N=0, in, out, max=0;
	
	for(int i=0; i<4; i++) {
		cin >> out >> in;
		if(N-out+in > max) max = N-out+in;
		N = N-out+in;
	}
	cout << max;
	
	return 0;
}

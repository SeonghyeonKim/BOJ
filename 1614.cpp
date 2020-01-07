#include<iostream>
using namespace std;

int main(void)
{
	long long int finger, N;
	cin >> finger >> N;
	
	if(finger==1) cout << N*8;
	if(finger==2) cout << (N/2)*8+(N%2)*6+1;
	if(finger==3) cout << (N/2)*8+(N%2)*4+2;
	if(finger==4) cout << (N/2)*8+(N%2)*2+3;
	if(finger==5) cout << N*8+4;
	
	return 0;
}

#include<iostream>
using namespace std;

int main(void)
{
    int E, S, M, i;
	
	cin >> E >> S >> M;
	
	for(i=1; 1; i++) {
		if((i-E)%15==0&&(i-S)%28==0&&(i-M)%19==0) break;
	}
	
	cout << i;
	
	return 0;
}

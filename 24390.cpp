#include <iostream>
#include <cstdio>
using namespace std;

int main(void) {
	int a, b;
	scanf("%d:%d", &a, &b); 
	
	int cnt = 1;
	cnt += a/10 + a%10 + b/30 + b%30/10;
	
	if(b>=30) cnt--;
	cout << cnt;
	
	return 0;
}

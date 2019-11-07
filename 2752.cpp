#include<iostream>
#include<cstdio>
using namespace std;

int main(void)
{
	int a, b, c;
	cin >> a >> b >> c;
	
	if(a<b && a<c) {
		if(b<c) printf("%d %d %d", a, b, c);
		else printf("%d %d %d", a, c, b);
	}
	else if(b<c) {
		if(a<c) printf("%d %d %d", b, a, c);
		else printf("%d %d %d", b, c, a);
	}
	else {
		if(b<a) printf("%d %d %d", c, b, a);
		else printf("%d %d %d", c, a, b);
	}
	
	return 0;
}

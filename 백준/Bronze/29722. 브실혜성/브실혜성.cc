#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <string>
#define ll long long
#define piv pair<int, vector<int> >
using namespace std;

int main() {
	//cin.tie(NULL);
	//ios_base::sync_with_stdio(false);
	
	int a, b, c, d;
	scanf("%d-%d-%d\n%d", &a, &b, &c, &d);
	c += d;
	
	b--;
	c--;
	
	if(c>=30) {
		b += c/30;
		c %= 30;
	}
	
	if(b>=12) {
		a += b/12;
		b %= 12;
	}
	
	printf("%d-%02d-%02d", a, b+1, c+1);
	
	return 0;
}
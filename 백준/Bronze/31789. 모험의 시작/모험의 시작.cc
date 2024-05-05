#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>
#define MOD 1000000007
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N, flag=0;
	cin >> N;
	
	int a, b;
	cin >> a >> b;
	
	while(N--) {
		int c, p;
		cin >> c >> p;
		
		if(c <= a && b < p) flag=1;
	}
	
	if(flag) cout << "YES";
	else cout << "NO";
	
	return 0;
}
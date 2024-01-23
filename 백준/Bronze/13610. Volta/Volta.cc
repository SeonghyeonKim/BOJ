#include <iostream>
#include <string>
#include <cmath>
#include <stack>
#include <vector>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int a, b, t=1;
	cin >> a >> b;
	
	int t1=a+a, t2=b;
	while(t++) {
		if(t1 <= t2) {
			cout << t;
			break;
		}
		t1+=a;
		t2+=b;
	}
 
	return 0;
}

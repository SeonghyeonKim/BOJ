#include <iostream>
#include <string>
#include <cmath>
#include <stack>
#include <vector>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N, x=0, y=0;
	cin >> N;
	
	for(int i=0; i<1000; i++) {
		if(x*y >= N) {
			cout << x << " " << y;
			return 0;
		}
		
		if(i%2) x++;
		else y++;
	}

	return 0;
}

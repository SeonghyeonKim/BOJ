#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N, cnt=0;
	cin >> N;
	
	for(int i=0; i<N; i++) {
		double a, b, c, d;
		cin >> a >> b >> c >> d;
		
		if(((a<=56 && b<=45 && c<=25) || a+b+c <= 125) && d<=7) {
			cout << "1\n";
			cnt++;
		}
		else cout << "0\n";
	}
	
	cout << cnt;
	
	return 0;
}
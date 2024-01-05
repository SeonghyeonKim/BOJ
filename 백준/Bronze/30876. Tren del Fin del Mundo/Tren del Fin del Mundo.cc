#include <iostream>
#include <string>
#include <algorithm>
#include <queue>
#include <vector>
#include <map>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N;
	cin >> N;
	
	int ansx=1001, ansy=1001;
	for(int i=0; i<N; i++) {
		int a, b;
		cin >> a >> b;
		
		if(b < ansy) {
			ansx = a;
			ansy = b;
		}
	}	
	cout << ansx << " " << ansy;
	
	return 0;
}
 
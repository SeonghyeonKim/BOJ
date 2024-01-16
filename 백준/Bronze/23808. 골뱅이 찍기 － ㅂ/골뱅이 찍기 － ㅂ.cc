#include <iostream>
#include <string>
#include <cmath>
#include <stack>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;
	
	for(int i=0; i<5*N; i++) {
		for(int j=0; j<5*N; j++) {
			if(j>=N && j<4*N && (i<2*N || (i<4*N && i>=3*N))) cout << " ";
			else cout << "@";
		}
		cout << "\n";
	}
		
	return 0;
}

#include<iostream>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N;
	cin >> N;
	
	for(int i=0; i<N*5; i++) {
		for(int j=0; j<N*5; j++) {
			if(i<N || j<N) cout << "@";
		}
		cout << "\n";
	}
	
	return 0;
}

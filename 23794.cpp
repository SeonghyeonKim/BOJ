#include<iostream>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N;
	cin >> N;
	
	for(int i=0; i<N+2; i++) {
		for(int j=0; j<N+2; j++) {
			if(i==0 || i==N+1 || j==0 || j==N+1) cout << "@";
			else cout << " ";
		}
		cout << "\n";
	}	
	
	return 0;
}

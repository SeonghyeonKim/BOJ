#include <iostream>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N;
	cin >> N;
	
	for(int i=1; i<=N; i++) {
		cout << i << " ";
		if(i%6==0) cout << "Go! ";	
	}
	if(N%6) cout << "Go!";
	
	return 0;
}
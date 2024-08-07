#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

	int N;
	cin >> N;
	
	if(N%2) {
		int idx=N/2+1;
		for(int i=1; i<=N; i++) {
			cout << idx << " ";
			
			if(i%2) idx += (N/2);
			else idx -= (N/2+1);
		}
	}
	else {
		int idx=N/2;
		for(int i=1; i<=N; i++) {
			cout << idx << " ";
			
			if(i%2) idx += (N/2);
			else idx -= (N/2+1);
		}		
	}

    return 0;
}
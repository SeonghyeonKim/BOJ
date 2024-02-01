#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int A, B, N;
	cin >> A >> B >> N;
	
	for(int i=0; i<N; i++) {
		cout << N*A + (i+1)*B << " ";
	}

	return 0;
}


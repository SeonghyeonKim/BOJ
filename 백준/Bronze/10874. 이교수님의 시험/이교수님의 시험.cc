#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N;
	cin >> N;
	
	for(int i=0; i<N; i++) {
		int cnt = 0;
		for(int j=0; j<10; j++) {
			int a;
			cin >> a;
			
			if(a==j%5+1) cnt++;
		}
		if(cnt == 10) cout << i+1 << "\n";
	} 
	
	return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int S, N, M, T=0;
	cin >> S >> N >> M;
	
	for(int i=0; i<N+M; i++) {
		int a;
		cin >> a;
		
		if(a) {
			if(T==S) {
				S*=2;
				T++;
			}
			else {
				T++;
			}
		} 
		else {
			T--;
		}
	}
	cout << S;
		
	return 0;
}

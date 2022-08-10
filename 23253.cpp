#include <iostream>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N, M;
	cin >> N >> M;
		
	for(int i=0; i<M; i++) {
		int num, temp;
		cin >> num >> temp;
		
		for(int j=1; j<num; j++) {
			int a;
			cin >> a;
			
			if(a > temp) {
				cout << "No";
				exit(0);
			}
		}	
	}
	
	cout << "Yes";
	
	return 0;
}

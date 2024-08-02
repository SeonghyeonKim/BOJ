#include <iostream>
#include <vector>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N;
	cin >> N;
	
	for(int i=1; i<=N; i++) {
		if(i%3==0 && i%5==0) cout << "DeadMan\n";
		else if(i%5==0) cout << "Man\n";
		else if(i%3==0) cout << "Dead\n";
		else cout << i << " ";
	}	

	return 0;
}
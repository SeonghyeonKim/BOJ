#include <iostream>
using namespace std;

int main(void) {
	int N;
	cin >> N;
	
	int round = 1;
	while(round) {
		int stone = round * (round+1)/2;
		
		if(N<stone) {
			if(round%2) {
				cout << stone - N;
				break;	
			}
			else {
				cout << 0;
				break;
			}
		}
		
		round++;
	}
	
	return 0;
}
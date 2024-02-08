#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

string s = "ABCBCDCDADAB";

int main(void) {
	cin.tie(NULL);
    ios_base::sync_with_stdio(false);

	int N;
	cin >> N;
	
	for(int i=0; i<N; i++) {
		int a;
		cin >> a;
		
		cout << s[(a-1)%12] << "\n";
	}	
	
    return 0;
}
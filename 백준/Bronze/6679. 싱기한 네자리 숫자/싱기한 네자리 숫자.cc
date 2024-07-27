#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	for(int i=1000; i<=9999; i++) {
		int a = i/1000 + i/100%10 + i/10%10 + i%10;
		int b = i/12/12/12%12 + i/12/12%12 + i/12%12 + i%12;
		int c = i/16/16/16%16 + i/16/16%16 + i/16%16 + i%16;
				
		if(a==b && b==c) cout << i << "\n";
	}

	return 0;
}
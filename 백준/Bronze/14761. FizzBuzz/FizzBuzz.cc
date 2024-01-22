#include <iostream>
#include <string>
#include <cmath>
#include <stack>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int X, Y, N;
	cin >> X >> Y >> N;
	
	for(int i=1; i<=N; i++) {
		if(i%X==0 && i%Y==0) cout << "FizzBuzz\n";
		else if(i%X==0) cout << "Fizz\n";
		else if(i%Y==0) cout << "Buzz\n";
		else cout << i << "\n";
	}
	
	return 0;
}

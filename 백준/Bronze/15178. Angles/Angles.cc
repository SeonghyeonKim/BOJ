#include <iostream>
#include <string>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;
	
	while(N--) {
		int a, b, c;
		cin >> a >> b >> c;
		cout << a << " " << b << " " << c;
		if(a+b+c==180) cout << " Seems OK\n";
		else cout << " Check\n";
	}

	return 0;
}

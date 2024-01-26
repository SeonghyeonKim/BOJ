#include <iostream>
#include <string>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N;
	cin >> N;
	
	while(N--) {
		string s;
		cin >> s;
		cout << s.size() << "\n";
	}
	
	return 0;
}

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int n;
	cin >> n;
	while(n--) {
		string s;
		cin >> s;
		
		s.erase(unique(s.begin(), s.end()), s.end());
		cout << s << "\n";
	}	

	
	return 0;
}
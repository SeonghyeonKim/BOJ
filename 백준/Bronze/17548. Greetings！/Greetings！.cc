#include <iostream>
#include <string>
using namespace std;

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

	string s;
	cin >> s;
	cout << "h" << s.substr(1, s.size()-2) << s.substr(1, s.size()-2)   << "y";
	
    return 0;
}
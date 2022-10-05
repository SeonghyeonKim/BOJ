#include <iostream>
#include <regex>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	string s;
	cin >> s;
	
	regex re("(100+1+|01)+");
	
	if(regex_match(s.c_str(), re)) cout << "SUBMARINE";
	else cout << "NOISE";

	return 0;
}
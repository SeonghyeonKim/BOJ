#include <iostream>
#include <regex>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int N;
	cin >> N;
	
	regex re("(A|B|C|D|E){0,1}A+F+C+(A|B|C|D|E){0,1}");
	
	while(N--) {
		string s;
		cin >> s;
		
		if(regex_match(s, re)) cout << "Infected!\n";
		else cout << "Good\n";
	}
	
	return 0;
}
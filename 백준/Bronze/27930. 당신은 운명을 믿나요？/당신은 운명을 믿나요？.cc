#include <iostream>
#include <string>
using namespace std;

string a = "KOREA";
string b = "YONSEI";
int ai=0, bi=0;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	string s;
	cin >> s;
	
	for(int i=0; i<s.size(); i++) {
		if(ai==5) {
			cout << "KOREA";
			break;	
		}
		if(bi==6) {
			cout << "YONSEI";
			break;
		}
		
		if(s[i]==a[ai]) ai++;
		if(s[i]==b[bi]) bi++;
	}
	
	return 0;
}

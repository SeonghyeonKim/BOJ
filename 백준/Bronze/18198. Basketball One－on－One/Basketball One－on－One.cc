#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int arr[2];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string s;
	cin >> s;
	
	for(int i=0; i<s.size(); i+=2) {
		if(s[i]=='A') arr[0]+=(s[i+1]-'0');
		else arr[1]+=(s[i+1]-'0');
	}
	
	if(arr[0]>arr[1]) cout << "A";
	else cout << "B";
	
	return 0;
}

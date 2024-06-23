#include <iostream>
#include <string>
#include <vector>
using namespace std;

string change(string s) {
	string tmp = s;
	for(int i=0; i<(s.size()+1)/2; i++) {
		tmp[i*2] = s[i];
	}
	for(int i=s.size()-1, j=1; i>=s.size()/2; i--, j+=2) {
		tmp[j] = s[i];
	}
	
	return tmp;
}

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N;
	string s;
	cin >> N >> s;
	
	int cnt=1;
	vector<string> v;
	v.push_back(s);
	string tmp = change(s);
	while(s != tmp) {
		v.push_back(tmp);
		tmp = change(tmp);
		cnt++;
	}
	
	cout << v[(cnt - (N%cnt))%cnt];
	
	return 0;
}


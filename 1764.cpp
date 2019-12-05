#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(void)
{
	int a, b, count=0;
	string s;
	vector<string> vs;
	cin >> a >> b;
	for(int i=0; i<a+b; i++) {
		cin >> s;
		vs.push_back(s);
	}
	sort(vs.begin(), vs.end());
	for(int i=1; i<vs.size(); i++) {
		if(vs[i] == vs[i-1]) count++; 
	}
	cout << count << "\n";
	for(int i=1; i<vs.size(); i++) {
		if(vs[i] == vs[i-1]) cout << vs[i] << "\n"; 
	}
		
	return 0;
}

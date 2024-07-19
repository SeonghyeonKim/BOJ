#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int L, C;
string arr[16];
vector<string> v;

void dfs(int idx, string s, int a, int b) {
	if(idx>=C) return ;
	
	if(a+b==L) {
		if(a>=1 && b>=2) v.push_back(s);
		return ;
	}
	
	for(int i=idx+1; i<C; i++) {
		if(arr[i]=="a" || arr[i]=="e" || arr[i]=="i" || arr[i]=="o" || arr[i]=="u") dfs(i, s+arr[i], a+1, b);
		else dfs(i, s+arr[i], a, b+1);
	}
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	cin >> L >> C;
	
	for(int i=0; i<C; i++) {
		cin >> arr[i];	
	}
	
	sort(arr, arr+C);
	
	dfs(-1, "", 0, 0);
	
	for(int i=0; i<v.size(); i++) {
		cout << v[i] << "\n";
	}
	  
	return 0;
}

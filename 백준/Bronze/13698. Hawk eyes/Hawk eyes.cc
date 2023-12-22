#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <algorithm>
#define ll long long
using namespace std;

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    string s;
    cin >> s;
    
    vector<int> v(4,0);
    v[0] = 1;
    v[3] = 2;
    
    for(int i=0; i<s.size(); i++) {
    	if(s[i]=='A') swap(v[0], v[1]);
    	if(s[i]=='B') swap(v[0], v[2]);
    	if(s[i]=='C') swap(v[0], v[3]);
    	if(s[i]=='D') swap(v[1], v[2]);
    	if(s[i]=='E') swap(v[1], v[3]);
    	if(s[i]=='F') swap(v[2], v[3]);
	}
    
    int a, b;
    for(int i=0; i<4; i++) {
    	if(v[i]==1) a = i;
    	if(v[i]==2) b = i;
	}
    
    cout << a+1 << "\n" << b+1;
    
    return 0;
}
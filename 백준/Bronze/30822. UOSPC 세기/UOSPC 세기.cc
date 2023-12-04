#include <iostream>
#include <vector>
#include <string>
using namespace std;

int alpha[26];

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int N;
    string s;
    cin >> N >> s;
    
    for(int i=0; i<N; i++) {
    	alpha[s[i]-'a']++;
	}
    cout << min(min(min(min(alpha['u'-'a'], alpha['o'-'a']), alpha['s'-'a']), alpha['p'-'a']), alpha['c'-'a']);
    
    return 0;
}
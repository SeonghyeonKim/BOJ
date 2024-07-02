#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

char alpha[26];

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int N;
    string s, ans = "";
    cin >> N >> s;
    
    for(int i=0; i<s.size(); i++) {
        if(alpha[int(s[i]-'a')]==0) {
            ans.append(1, s[i]);
            alpha[int(s[i]-'a')]++;
        }
    }
    reverse(ans.begin(), ans.end());
    
    int tmp = s.size()-ans.size()+4;
    int tmp2 = 1906+N;
    
    cout << "smupc_";
    for(int i=tmp; i>0; i/=10) cout << i%10;
    cout << ans;
    for(int i=tmp2; i>0; i/=10) cout << i%10;
     
    return 0;
}
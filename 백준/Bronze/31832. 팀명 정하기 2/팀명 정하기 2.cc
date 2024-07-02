#include <iostream>
#include <string>
using namespace std;

int check(string s) {
    if(s.size()>10) return 0;
    
    int cnt1=0, cnt2=0;
    int flag=1;
    
    for(int i=0; i<s.size(); i++) {
        if(!(s[i]>='0'&&s[i]<='9')) flag = 0;
        if(s[i]>='a' && s[i]<='z') cnt1++;
        if(s[i]>='A' && s[i]<='Z') cnt2++;
    }
    
    if(flag) return 0;
    if(cnt1 < cnt2) return 0;
    return 1;
}

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int N;
    cin >> N;
    
    for(int i=0; i<N; i++) {
        string s;
        cin >> s;
        if(check(s)) cout << s;
    }
    
    return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int N;
    string s;
    cin >> N >> s;
    
    int a=0, b=0;
    for(int i=0; i<N; i++) {
        if((int(s[i]-'0'))%2==0) a++;
        else b++;
    }
    
    if(a>b) cout << 0;
    else if(a<b) cout << 1;
    else cout << -1;  
        
    return 0;
}
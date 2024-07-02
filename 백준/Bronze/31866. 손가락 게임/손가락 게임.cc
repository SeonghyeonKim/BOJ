#include <iostream>
using namespace std;

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int N, M;
    cin >> N >> M;
    if(N==0) {
        if(M==0) cout << "=";
        else if(M==5) cout << "<";
        else cout << ">";
    }
    else if(N==2) {
        if(M==0) cout << "<";
        else if(M==2) cout << "=";
        else cout << ">";
    }
    else if(N==5) {
        if(M==2) cout << "<";
        else if(M==5) cout << "=";
        else cout << ">";
    }
    else {
        if(M==0 || M==2 || M==5) cout << "<";
        else cout << "=";
    }
    
    return 0;
}
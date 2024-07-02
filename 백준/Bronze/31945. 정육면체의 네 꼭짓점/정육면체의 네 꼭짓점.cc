#include <iostream>
using namespace std;

int x[] = {0,0,0,0,1,1,1,1};
int y[] = {0,0,1,1,0,0,1,1};
int z[] = {0,1,0,1,0,1,0,1};

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int T;
    cin >> T;
    
    while(T--) {
        int flag=0, a, b, c, d;
        cin >> a >> b >> c >> d;
        
        if(x[a]==x[b] && x[b]==x[c] && x[c]==x[d]) flag = 1;
        if(y[a]==y[b] && y[b]==y[c] && y[c]==y[d]) flag = 1;
        if(z[a]==z[b] && z[b]==z[c] && z[c]==z[d]) flag = 1;
        
        if(flag) cout << "YES\n";
        else cout << "NO\n";
    }
    
    return 0;
}
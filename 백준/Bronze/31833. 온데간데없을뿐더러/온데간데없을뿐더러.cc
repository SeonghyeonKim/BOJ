#include <iostream>
using namespace std;

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    long long N, X=0, Y=0;
    cin >> N;
    
    for(int i=0; i<N; i++) {
        long long a;
        cin >> a;
        if(a<10) X = X*10 + a;
        else X = X*100 + a;
    }
    
    for(int i=0; i<N; i++) {
        long long a;
        cin >> a;
        if(a<10) Y = Y*10 + a;
        else Y = Y*100 + a;
    }
    cout << min(X, Y);
     
    return 0;
}
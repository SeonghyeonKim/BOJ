#include <iostream>
using namespace std;

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int N, M;
    cin >> N >> M;
    cout << (N-1)*(M-1)*2;
    
    return 0;
}
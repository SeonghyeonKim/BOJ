#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int N, K;
    cin >> N >> K;
    cout << K / (int(pow(2, (N-1))));
    
    return 0;
}
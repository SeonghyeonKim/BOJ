#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    long long N;
    cin >> N;
    
    cout << N*(N-1)*(N-2)*(N-3)*(N-4)/5/4/3/2;
    
    return 0;
}
#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <algorithm>
#define ll long long
using namespace std;

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int H, W, N, M;
    cin >> H >> W >> N >> M;
    
    cout << ((H+N) / (N+1)) * ((W+M) / (M+1));
    
    return 0;
}
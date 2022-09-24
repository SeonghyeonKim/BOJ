#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
   cin.tie(NULL);
   ios_base::sync_with_stdio(false);
   
   int N;
   cin >> N;
   
   vector<int> v(N*2);
   for(int i=0; i<N*2; i++) cin >> v[i];
   
   sort(v.begin(), v.end());
   
   int ans = 987654321;
   for(int i=0; i<N; i++) ans = min(ans, v[i]+v[N*2-i-1]);

   cout << ans;
   
   return 0;
}
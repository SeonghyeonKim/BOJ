#include <iostream>
#include <vector>
#include <queue>
using namespace std;
 
int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
 
    int T;
    cin >> T;
 
    while(T--) {
        int N, K;
        cin >> N >> K;
 
        vector<int> ti(N+1);
 
        for(int i=1; i<=N; i++) cin >> ti[i];
 
        vector<int> arr[1001], degree(N+1), ans(N+1);
        queue<int> q;
 
        for(int i=0; i<K; i++) {
            int a, b;
            cin >> a >> b;
 
            arr[a].push_back(b);
            degree[b]++;
        }
 
        for(int i=1; i<=N; i++) {
            if(degree[i]==0) {
                q.push(i);
            }
        }

        int num;
        cin >> num;
 
        while(degree[num]>0) {
            int cur = q.front();
            q.pop();
 			
 			for(int i=0; i<arr[cur].size(); i++) { 
                ans[arr[cur][i]] = max(ans[arr[cur][i]], ans[cur]+ti[cur]);
                
				degree[arr[cur][i]]--;
                if(degree[arr[cur][i]]==0) {
                	q.push(arr[cur][i]);
                }
            }
        }

        cout << ans[num] + ti[num] << "\n";
    }
    
	return 0;
}

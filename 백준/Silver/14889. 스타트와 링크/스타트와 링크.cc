#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
 
int N, ans=987654321;
int arr[21][21];
int visited[21];
 
void dfs(int cnt, int idx) {
    if(cnt==N/2) {
        vector<int> x, y;
        for(int i=0; i<N; i++) {
            if(visited[i]) x.push_back(i);
            else y.push_back(i);
        }

        int sumx=0, sumy=0;
        for(int i=0; i<N/2; i++) {
            for(int j=0; j<N/2; j++) {
                sumx += arr[x[i]][x[j]];
                sumy += arr[y[i]][y[j]];
            }
        }

        ans = min(ans, abs(sumx-sumy));
    
        return ;
    }

    for(int i=idx; i<N; i++) {
        if(visited[i]==0) {
        	visited[i]=1;
  			dfs(cnt+1, i);
			visited[i]=0;	
		}
    }

    return ;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N;
 
    for(int i=0; i<N; i++) 
        for(int j=0; j<N; j++)
            cin >> arr[i][j];

    dfs(0, 0);

    cout << ans;

	return 0;
}
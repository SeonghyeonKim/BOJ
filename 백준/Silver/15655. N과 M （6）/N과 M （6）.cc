#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, M;
int arr[10001];
int visited[10001];

void dfs(int idx, int cnt) {
	if(cnt == M) {
		for(int i=0; i<N; i++) {
			if(visited[i]==1) {
				cout << arr[i] << " ";	
			} 
		}
		
		cout << "\n";
		return ;
	}
	
	for(int i=idx+1; i<N; i++) {
		visited[i]=1;
		dfs(i, cnt+1);
		visited[i]=0;
	}
}

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> N >> M;

    for (int i = 0; i < N; i++) 
        cin >> arr[i];

	sort(arr, arr+N);
    
    dfs(-1, 0);
    
    return 0;
}
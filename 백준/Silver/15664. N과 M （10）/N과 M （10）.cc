#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, M;
int arr[10001];
vector<int> v;
vector<vector<int> > answer;

void dfs(int idx, int cnt) {
	if(cnt == M) {	
		for(int i=0; i<v.size(); i++) {
			answer.push_back(v);
		}
		return ;
	}
	
	for(int i=idx+1; i<N; i++) {
		v.push_back(arr[i]);
		dfs(i, cnt+1);
		v.pop_back();
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
    
    sort(answer.begin(), answer.end());
    
    answer.erase(unique(answer.begin(), answer.end()), answer.end());
    
    for(int i=0; i<answer.size(); i++) {
    	for(int j=0; j<answer[i].size(); j++) {
    		cout << answer[i][j] << " ";
		}
		cout << "\n";
	}
    
    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, M;
int arr[10001];
vector<int> v;

void dfs(int idx, int cnt) {
	if(cnt == M) {	
		for(int i=0; i<v.size(); i++) {
			cout << v[i] << " ";
		}
		cout << "\n";
		return ;
	}
	
	for(int i=0; i<N; i++) {
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
    
    dfs(0, 0);
    
    return 0;
}
#include <iostream>
#define pii pair<int, int>
using namespace std;

int ans = 0;
int visited[101];
pii v[10001];

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

	int N, M;
	cin >> N >> M;
	
	visited[1] = 1;
	
	for(int i=0; i<M; i++) {
		int a, b;
		cin >> a >> b;
		
		v[i].first = a;
		v[i].second = b;
	}
	
	for(int i=0; i<M*M; i++) {
		for(int j=0; j<M; j++) {
			if(visited[v[j].first]==1) {
				if(visited[v[j].second] != 1) {
					visited[v[j].second] = 1;
					ans++;
				}
			}
			else if(visited[v[j].second]==1) {
				if(visited[v[j].first] != 1) {
					visited[v[j].first] = 1;
					ans++;
				}
			}
		}
	}
	
	cout << ans;
	
    return 0;
}
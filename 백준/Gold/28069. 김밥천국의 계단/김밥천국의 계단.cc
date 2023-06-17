#include <iostream>
#include <queue>
#define pii pair<int, int>
using namespace std;

int visited[1000001];

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N, K;
	cin >> N >> K;
	
	if(N==1) {
		cout << "minigimbob";
		return 0;	
	}
	
	queue<pii> q;
	visited[1] = 1;
	q.push({1,1});
	
	while(!q.empty()) {
		int c = q.front().first;
		int cnt = q.front().second;
		q.pop();
		
		if(cnt>K) {
			break;
		}
		
		if(c==N) {
			cout << "minigimbob";
			return 0;	
		}
		
		if(c+1<=1000000 && !visited[c+1]) {
			visited[c+1]=1;
			q.push({c+1,cnt+1});	
		}
		if(c+c/2<=1000000 && !visited[c+c/2]) {
			visited[c+c/2]=1;
			q.push({c+c/2,cnt+1});	
		} 
	}
	
	cout << "water";
	
	return 0;
}

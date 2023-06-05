#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
#define pii pair<int, int>
using namespace std;

int isIn[1000002];
int arr[100002];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;
	
	vector<int> v(N+1);
	for(int i=1; i<=N; i++) {
		cin >> v[i];
		isIn[v[i]] = i;	
	}
		
	for(int i=1; i<=N; i++) {
		for(int j=v[i]+v[i]; j<=1000000; j+=v[i]) {
			if(isIn[j]!=0) {
				arr[i]++;
				arr[isIn[j]]--;
			}
		} 
	}
	
	for(int i=1; i<=N; i++) cout << arr[i] << " ";

	return 0;
}

#include<iostream>
#include<vector>
using namespace std;

int arr[1003][1003];
int dx[] = {0,1,0,-1};
int dy[] = {1,0,-1,0};

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N, M, K;
	cin >> N >> M >> K;

	if (K > N*M) {
		cout << 0;
		return 0;
	}

	arr[1][M + 1] = -1;
	arr[N + 1][M] = -1;
	arr[N][0] = -1;

	int x = 1, y = 1, cnt=1, flag=0;
	while (1) {
		if (cnt == K) {
			cout << x << " " << y;
			return 0;
		}

		arr[x][y] = cnt;

		if (arr[x + dx[flag]][y + dy[flag]] != 0)
			flag = (flag + 1) % 4;
		x += dx[flag];
		y += dy[flag];
		cnt++;
	}

	return 0;
}
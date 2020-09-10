// 두 점 a, b의 좌표와 한 점 c와 두 점 a, b 사이 각각의 거리를 알 때 c가 존재할 수 있는 위치의 수 출력
// a, b를 중심으로 하고 점 c와의 거리를 반지름으로 한 원을 그렸을 때
// 두 원이 접할 때의 점의 수가 점 c가 존재할 수 있는 위치의 수
// 두 원이 일치할때 점 c의 수는 무한대이므로 -1 출력

#include<iostream>
#include<cmath>
using namespace std;

float reach(int, int, int, int);

int main()
{
	int x1, y1, x2, y2, r1, r2, T;

	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

		if (x1 == x2 && y1 == y2 && r1 == r2) // 두 원이 일치
			cout << -1 << "\n";
		else if (abs(r1 - r2) < reach(x1, y1, x2, y2) && reach(x1, y1, x2, y2) < r1 + r2) // 두 원의 접점이 2개
			cout << 2 << "\n";
		else if (reach(x1, y1, x2, y2) == r1 + r2 || reach(x1, y1, x2, y2) == abs(r1 - r2)) // 두 원의 접점이 1개
			cout << 1 << "\n";
		else // 두 원이 접하지 않을때
			cout << 0 << "\n";
	}

	return 0;
}

float reach(int x1, int y1, int x2, int y2) { // 두 점 사이의 거리 리턴
	return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

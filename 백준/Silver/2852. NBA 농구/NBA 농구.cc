#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	//cin.tie(NULL);
	//ios_base::sync_with_stdio(false);
	
	int N;
	cin >> N;
	
	int a=0, b=0, tmp=0;
	int cnt[3]={0,0,0};
	for(int i=0; i<N; i++) {
		int p, q, w;
		cin >> p;
		scanf("%d:%d", &q, &w);
		
		if(i==0) {
			tmp = q*60 + w;
			cnt[p]++;
			continue;
		}
		
		if(cnt[1] > cnt[2]) {
			a += q*60+w - tmp;		
		}
		else if(cnt[2] > cnt[1]) {
			b += q*60+w - tmp;
		}
		cnt[p]++;
		tmp = q*60 + w;
	}
	
	if(cnt[1] > cnt[2]) a += 48*60 - tmp;
	else if(cnt[2] > cnt[1]) b += 48*60 - tmp;
	
	printf("%02d:%02d\n%02d:%02d", a/60, a%60, b/60, b%60);
	
	return 0;
}

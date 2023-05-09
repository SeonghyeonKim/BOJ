#include <iostream>
#include <vector>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int a, b, ans=0, temp, num, cnt[2]={0,0};
	cin >> a >> b;
	
	for(int i=0; i<a; i++) {
		temp=0;
		cnt[0]=0;
		cnt[1]=0;
		
		for(int j=0; j<b; j++) {
			cin >> num;
			
			if(num!=temp && num!=0) {
				cnt[num-1]++;
				temp = num;
			}
			
			if(temp!=0 && (num==0 || j==b-1)) {
				ans+=min(cnt[0], cnt[1])+1;
				
				cnt[0]=0;
				cnt[1]=0;
				temp=0;
			}
		}
	}
	cout << ans;

    return 0;
}


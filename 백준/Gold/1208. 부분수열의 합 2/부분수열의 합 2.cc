#include <iostream>
#include <map>
using namespace std;
 
int N, S;
int arr[41];
map<int, int> m;
long long cnt;
 
void left(int idx, int sum){
    if(idx == N/2){
    	m[sum]++;
        return;
    }
    
    left(idx+1, sum+arr[idx]);
    left(idx+1, sum);
}
 
void right(int idx, int sum){
    if(idx == N){
    	cnt += m[S-sum];
        return;
    }
    
    right(idx+1, sum+arr[idx]);
    right(idx+1, sum);
}
 
int main(){
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
    cin >> N >> S;
    for(int i=0; i<N; i++){
        cin >> arr[i];
    }
    
    left(0, 0);
    right(N/2, 0);
    
    if(S!=0) cout << cnt;
    else cout << cnt-1;
    
    return 0;
}
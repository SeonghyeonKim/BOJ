// 피보나치 수열 출력
// fibo(n) = fibo(n-1) + fibo(n-2)
// 시간초과(최대 2^40)를 고려하여 dp로 해결

#include <iostream>
using namespace std;
 
int dp[41];
int fibonacci(int);
 
int main(void){
    int test;
    cin >> test;
    
    while(test-- > 0){
        int x;
        cin >> x;
        if(x == 0){
            cout << "1 0\n";
        }else if(x == 1){
            cout << "0 1\n";
        }else{
            fibonacci(x);
            cout << dp[x-1] << " " << dp[x] << "\n";
        }
    }
    
    return 0;
}

int fibonacci(int n){
    if(n <= 0){
        dp[0] = 0;
        return 0;
    }else if(n ==1){
        dp[1] = 1;
        return 1;
    }
    if(dp[n] != 0){
        return dp[n];
    } else {
        return dp[n] = fibonacci(n-1) + fibonacci(n-2);
    }
}

#include<iostream>
using namespace std;

int main(void)
{
    int T, a, b, num;
    
    cin >> T;
    
    for(int i=0; i<T; i++) {
        cin >> a >> b;
        num = a%10;
        for(int j=1; j<b; j++) {
            num = num*a%10;
        }
        if(num==0)
            cout << "10\n";
        else
            cout << num << "\n";
    }
    
    return 0;
}

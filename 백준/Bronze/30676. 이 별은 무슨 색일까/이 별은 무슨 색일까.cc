#include <iostream>
using namespace std;

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int N;
    cin >> N;
    
    if(N >= 620) cout << "Red";
    else if(N >= 590) cout << "Orange";
    else if(N >= 570) cout << "Yellow";
    else if(N >= 495) cout << "Green";
    else if(N >= 450) cout << "Blue";
    else if(N >= 425) cout << "Indigo";
    else cout << "Violet";
    
    return 0;
}
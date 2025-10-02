#include <iostream>
using namespace std;

int main() {
    int n[10];
    int sum = 0, cnt = 0;
    
    for(int i = 0; i < 10; i++) {
        cin >> n[i];
        if(n[i] == 0) break;
        cnt++;
        sum += n[i];
    }
    
    cout << fixed;
    cout.precision(1);

    cout << sum << " " << (float)sum / cnt;

    return 0;
}
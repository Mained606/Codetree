#include <iostream>
using namespace std;

int main() {
    int n[10];
    int sum = 0;
    int avg = 0;
    int cnt = 0;
    
    for(int i = 0; i < 10; i++) {
        cin >> n[i];
        if(n[i] % 2 == 0) sum += n[i];
        if(n[i] % 3 == 0) {
            cnt++;
            avg += n[i];
        }
    }

    cout << fixed;
    cout.precision(1);

    cout << sum << ' ' << (float)avg / cnt;
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int n[10];
    int sum1 = 0, sum2 = 0;
    
    for(int i = 1; i <= 10; i++) {
        cin >> n[i-1];
        if(i % 2 == 0) sum2 += n[i-1];
        else sum1 += n[i-1];
    }

    if(sum1 > sum2) cout << sum1 - sum2;
    else cout << sum2 - sum1;

    return 0;
}
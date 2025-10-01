#include <iostream>
using namespace std;

int main() {
    double score[8];
    double sum = 0;

    cout << fixed;
    cout.precision(1);

    for(int i = 0; i < 8; i++) {
        cin >> score[i];
        sum += score[i];
    }

    cout << sum / 8;

    return 0;
}
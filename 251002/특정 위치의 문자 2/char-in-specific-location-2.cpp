#include <iostream>
using namespace std;

int main() {
    string s[10];

    for(int i = 0; i < 10; i++) {
        cin >> s[i];
    }
    
    cout << s[1] << ' ' << s[4] << ' ' << s[7];
    return 0;
}
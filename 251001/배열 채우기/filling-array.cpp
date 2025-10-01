#include <iostream>
using namespace std;

int main() {
    int nums[10];
    int cnt = 0;

    for(int i = 0; i < 10; i++) {
        cin >> nums[i];
        if(nums[i] == 0) {
            break;
        }
        cnt++;
    }

    for(int i = cnt - 1; i >= 0; i--) {
        cout << nums[i] << " ";
    }

    return 0;
}
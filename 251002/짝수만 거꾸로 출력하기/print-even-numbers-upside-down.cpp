#include <iostream>
using namespace std;

int main() {
    int n; 
    cin >> n;
    
    int nums[n];
    
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    for(int i = n; i > 0; i--) {
        if(nums[i - 1] % 2 == 0) cout << nums[i - 1] << ' ';
    }

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int n, cnt =0;
    cin >> n;
    
    int student[n][4];

    for(int i = 0; i < n; i++) {
        // 합계 초기화
        int sum = 0;
        
        // 점수 입력 받고 합계 저장
        for (int j = 0; j < 4; j++) {
            cin >> student[i][j];
            sum += student[i][j];
        }
        // 합격 여부 판단
        if((sum / 4) >= 60) {
            cout << "pass" << "\n";
            cnt++;
        }

        else cout << "fail" << "\n";
    }
    cout << cnt;

    return 0;
}
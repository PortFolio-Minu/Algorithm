#include <iostream>

using namespace std;

int main() {
    long a, b, c;

    cin >> a;
    cin >> b;
    cin >> c;

    long res = 0;
    
    // 노트북의 판매가격이 원가보다 같거나 작은 경우는 절대로 이익이 날 수 없다
    if ( c <= b)
    {
        cout << -1 <<endl;
        return 0;
    }
    // 손익분기점은 총 투입 비용보다 판매로 인한 이득보다 커야 하므로 1을 더한다
    res = (long)(a / (c-b)) + 1;
    
    cout << res << endl;

    return 0;
}

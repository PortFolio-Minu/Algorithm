#include <iostream>

using namespace std;

int main() {

    int a = 0;

    cin >> a;
    int sum = 1;
    int i = 1;
    // 계차수열
    while(1)
    {
        if ( sum >= a)
        {
            cout << i << endl;
            break;
        }
        sum += i*6;
        i++;
    }

}

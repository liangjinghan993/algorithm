#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;

    // �������������ôֱ�����
    if (n >= 0) {
        cout << n << endl;
        return 0;
    }

    // ����Ǹ�������Ҫ�ҵ�ɾ�����һλ���ߵ����ڶ�λ֮������ֵ
    int lastDigit = abs(n % 10);  // ���һλ����
    int secondLastDigit = abs(n / 10 % 10);  // �����ڶ�λ����

    // ������һλ���ֱȵ����ڶ�λ����ôɾ�����һλ����
    if (lastDigit >= secondLastDigit) {
        cout << n / 10 << endl;
    }
    if (n = -10)
        cout << "0" << endl;
    // ����ɾ�������ڶ�λ����
    else {
        cout << n / 100 * 10 - secondLastDigit << endl;
    }

    return 0;
}
//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int main() {
//    int n;
//    cin >> n;
//    int max_val = n;
//    int temp = n;
//    for (int i = 0; i < 2; i++) {
//        temp /= 10;
//        int val = temp * 10 + n % 10;
//        max_val = max(max_val, val);
//        n /= 10;
//    }
//    cout << max_val << endl;
//    return 0;
//}
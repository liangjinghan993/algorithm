#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;

    // 如果是正数，那么直接输出
    if (n >= 0) {
        cout << n << endl;
        return 0;
    }

    // 如果是负数，需要找到删除最后一位或者倒数第二位之后的最大值
    int lastDigit = abs(n % 10);  // 最后一位数字
    int secondLastDigit = abs(n / 10 % 10);  // 倒数第二位数字

    // 如果最后一位数字比倒数第二位大，那么删除最后一位数字
    if (lastDigit >= secondLastDigit) {
        cout << n / 10 << endl;
    }
    if (n = -10)
        cout << "0" << endl;
    // 否则删除倒数第二位数字
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
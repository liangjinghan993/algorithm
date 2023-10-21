#include <iostream>
#include <vector>

using namespace std;
//���ȶ�����һ����������arr��һ����Ҫ���ҵ�����x��Ȼ�����binarySearch ��������x������arr�е�λ�á�����ҵ��ˣ���������±꣬�������xδ�ҵ���
int binarySearch(vector<int>& arr, int x) {
    int left = 0, right = arr.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == x) {
            return mid;
        }
        else if (arr[mid] < x) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
    vector<int> arr = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int x = 5;
    int index = binarySearch(arr, x);
    if (index != -1) {
        cout << "Found " << x << " at index " << index << endl;
    }
    else {
        cout << x << " not found" << endl;
    }

    x = 10;
    index = binarySearch(arr, x);
    if (index != -1) {
        cout << "Found " << x << " at index " << index << endl;
    }
    else {
        cout << x << " not found" << endl;
    }

    x = 1;
    index = binarySearch(arr, x);
    if (index != -1) {
        cout << "Found " << x << " at index " << index << endl;
    }
    else {
        cout << x << " not found" << endl;
    }

    x = 9;
    index = binarySearch(arr, x);
    if (index != -1) {
        cout << "Found " << x << " at index " << index << endl;
    }
    else {
        cout << x << " not found" << endl;
    }

    return 0;
}
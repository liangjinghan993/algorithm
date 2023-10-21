#include <iostream>
#include <vector>

using namespace std;

vector<int> mergeSortedArrays(vector<int>& A, vector<int>& B) {
    int n = A.size();
    int m = B.size();
    vector<int> C(n + m);
    int i = 0, j = 0, k = 0;
    while (i < n && j < m) {
        if (A[i] <= B[j]) {
            C[k++] = A[i++];
        }
        else {
            C[k++] = B[j++];
        }
    }
    while (i < n) {
        C[k++] = A[i++];
    }
    while (j < m) {
        C[k++] = B[j++];
    }
    return C;
}

int main() 
{
    int n, m;
    cout << "Enter the size of array A: ";
    cin >> n;
    cout << "Enter the elements of array A in sorted order: ";
    vector<int> A(n);
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    cout << "Enter the size of array B: ";
    cin >> m;
    cout << "Enter the elements of array B in sorted order: ";
    vector<int> B(m);
    for (int i = 0; i < m; i++)
    {
        cin >> B[i];
    }
    vector<int> C = mergeSortedArrays(A, B);
    cout << "Merges sorted array: ";
    for (auto i : C) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
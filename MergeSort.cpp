#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int>& arr, int st, int mid, int end) {
    vector<int> temp;
    int i = st, j = mid + 1;
    while (i <= mid && j <= end) {
        if (arr[i] <= arr[j]) {
            temp.push_back(arr[i]);
            i++;
        } else {
            temp.push_back(arr[j]);
            j++;
        }
    }
    while (i <= mid) {
        temp.push_back(arr[i]);
        i++;
    }
    while (j <= end) {
        temp.push_back(arr[j]);
        j++;
    }
    for (int i = st; i <= end; i++) {
        arr[i] = temp[i - st];
    }
}

void mergeSort(vector<int>& arr, int st, int end) {
    if (st < end) {
        int mid = st + (end - st) / 2;
        mergeSort(arr, st, mid);
        mergeSort(arr, mid + 1, end);
        merge(arr, st, mid, end);
    }
}

int main() {
    vector<int> arr = {12, 11, 13, 5, 6, 7}; // Example input
    cout << "Given array is: ";
    for (int val : arr) {
        cout << val << " ";
    }
    cout << endl;

    mergeSort(arr, 0, arr.size() - 1);

    cout << "Sorted array is: ";
    for (int val : arr) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}

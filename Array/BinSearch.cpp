#include<iostream>
#include<algorithm> 
using namespace std;

int BinSearch(int arr[], int n, int key) {
    int st = 0;
    int end = n - 1;

    while (st <= end) {
        int mid = (st + end) / 2;
        if (arr[mid] == key) {
            return mid; 
        }
        else if (arr[mid] < key) {
            st = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    return -1; 
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n]; 

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the key to search: ";
    int key;
    cin >> key;

    sort(arr, arr + n);

    int index = BinSearch(arr, n, key);

    if (index != -1)
        cout << "Key found at index: " << index << endl;
    else
        cout << "Key not found." << endl;

    return 0;
}

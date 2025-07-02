#include<iostream>
using namespace std;

void LinearSearch(int *arr, int n, int key){
    bool found = false;

    for(int j = 0; j < n; j++) {
        if(key == arr[j]) {
            cout << "Key found at index " << j << ": " << arr[j] << endl;
            found = true;
            break;
        }
    }

    if(!found) {
        cout << "-1" << endl;
    }
}

int main() {
    int n;

    cout << "Enter Value of n: ";
    cin >> n;

    int arr[n], key;

    cout << "Enter " << n << " elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter The Key: ";
    cin >> key;

    LinearSearch(arr, n, key);

    return 0;
}
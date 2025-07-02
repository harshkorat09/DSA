#include<iostream>
using namespace std;

int main(){
    int n;

    cout << "Enter Value Of n: ";
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int Max = arr[0];

    for(int j = 1; j < n; j++) {
        if(arr[j] > Max) {
            Max = arr[j];
        }
    }

    cout << "Maximum value is: " << Max;

    return 0;
}
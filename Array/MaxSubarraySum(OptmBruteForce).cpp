#include<iostream>
using namespace std;

void MaxSubarrySum(int *arr,int n){

    int Max = INT16_MIN;
    for(int st=0;st<n;st++)
    {
        int CurrentSum=0;
        for (int end = st; end < n; end++)
        {
            CurrentSum += arr[end];
           Max = max(Max,CurrentSum);
        }
        
    }

    cout<<Max;
}

int main(){

    int n;

    cout<<"Enter Value Of n :";
    cin>>n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    MaxSubarrySum(arr,n);
    


}
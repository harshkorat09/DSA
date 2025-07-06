#include<iostream>
using namespace std;

void MaxSubarrySum(int *arr,int n){

    int Max = INT16_MIN;
    int CurrentSum=0;
    for(int i=0;i<n;i++)
    {

        CurrentSum += arr[i];
        Max = max(Max,CurrentSum);
        
        if(CurrentSum < 0)
        {
            CurrentSum=0;
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
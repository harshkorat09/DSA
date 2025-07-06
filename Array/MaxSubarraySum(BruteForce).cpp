#include<iostream>
using namespace std;

void MaxSubarrySum(int *arr,int n){

    int Max = INT16_MIN;
    for(int st=0;st<n;st++)
    {
        for (int end = st; end < n; end++)
        {
            int CurrentSum=0;
           for(int i=st ;i<end ;i++ )
           {
            CurrentSum += arr[i];
           }
         
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
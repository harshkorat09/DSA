#include<iostream>
using namespace std;

void PrintSubarrys(int *arr,int n){
    for(int st=0;st<n;st++)
    {
        for (int end = st; end < n; end++)
        {
           for(int i=st ;i<end ;i++ )
           {
            cout<<arr[i];
           }
           cout<<",";
        }
        
    }
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

    PrintSubarrys(arr,n);
    


}
// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

void leftRotateByD(int arr[], int d, int n){
    vector<int> temp;
    int x=arr[0];
    int j=0;
    for(int i=0;i<n;i++){
        if(i<d){
            temp.push_back(arr[i]);
        }
        else{
            arr[j]=arr[i];
            j++;
        }
    }
    for(int i=0;i<d;i++){
        arr[j]=temp[i];
        j++;
    }
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int d;
    cin>>d;
    leftRotateByD(arr,d%n,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
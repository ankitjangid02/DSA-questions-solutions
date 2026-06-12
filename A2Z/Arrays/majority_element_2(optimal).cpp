#include <bits/stdc++.h>
using namespace std;

void majority_element_2(vector<int> arr){
    vector<int> ls;
    int count1=0,count2=0;
    int el1=INT_MIN;
    int el2=INT_MIN;
    int n=arr.size();
    for(int i=0; i<n; i++){
        if(count1==0 && arr[i]!=el2){
            count1=1;
            el1=arr[i];
        }
        else if(count2==0 && arr[i]!=el1){
            count2=1;
            el2=arr[i];
        }
        else if(el1==arr[i]) count1++;
        else if(el2==arr[i]) count2++;
        else{
            count1--;
            count2--;
        }
    }
    count1=0;
    count2=0;
    for(int i=0; i<n; i++){
        if(el1==arr[i]) count1++;
        if(el2==arr[i]) count2++;
    }
    int mini=(int)(n/3)+1;
    if(count1>=mini) ls.push_back(el1);
    if(count2>=mini) ls.push_back(el2);
    for(int i=0; i<ls.size(); i++){
        cout<<ls[i]<<" ";
    }
}

int main() {
    vector<int> arr={1,1,1,2,2,3,3,3};
    majority_element_2(arr);
    return 0;
}
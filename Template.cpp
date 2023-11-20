#include<bits/stdc++.h>
using namespace std;

template <typename T> T findMax(T arr[],int size){
    T maxi=arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]>maxi){
            maxi=arr[i];
        }
    }return maxi;
}

int main(){
    int n,m;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    cin >> m;
    double arr1[m];
    for(int i=0;i<m;i++){
        cin >> arr1[i];
    }
    
    cout << "Max value for integer array: " << findMax(arr,n) << endl;
    cout << "Max value for double array:" << findMax(arr1,m) << endl;
}

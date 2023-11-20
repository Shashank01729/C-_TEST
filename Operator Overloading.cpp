#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    queue<int> q1,q2;
    cin >> n;
    for(int i=0;i<n;i++){
        int ele;
        cin >> ele;
        q1.push(ele);
    }
    cin >> m;
    for(int i=0;i<m;i++){
        int ele;
        cin >> ele;
        q2.push(ele);
    }
    
    if(q1==q2){
        cout << "Same" << endl;
    }
    else{
        cout << "Different" << endl;
    }
}
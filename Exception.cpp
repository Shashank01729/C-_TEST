#include<bits/stdc++.h>
using namespace std;

int main(){
    try{
        int a,b,c;
        cin >> a >> b;
        
        if(b==0){
            throw runtime_error("Division by zero is not allowed.");
        }

        c=a/b;
        cout << c << endl;

    } 
    catch(exception& e){
        cerr << "Exception caught: " << e.what() << endl;
    }
}
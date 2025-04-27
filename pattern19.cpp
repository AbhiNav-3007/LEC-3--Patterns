#include<bits/stdc++.h>
using namespace std;
void print19(int n){
    int space=0;
    for(int i=0; i<n; i++){
        for(int j=1; j<=n-i; j++){
            cout<< " * ";
        }
        for(int j=0; j<space; j++){
            cout<<"   ";
        }
        for(int j=1; j<=n-i; j++){
            cout<<" * ";
        }
        space+=2;
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    print19(n);
}
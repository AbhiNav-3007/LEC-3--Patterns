#include<bits/stdc++.h>
using namespace std;
void print(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i==1 || i==n || j==1 || j==n) cout<<"*";
            else cout<<" ";
        }cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    print(n);
}
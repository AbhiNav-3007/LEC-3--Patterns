/*
print:-
       *
     * * *
   * * * * *
 * * * * * * *
  */
 
#include<bits/stdc++.h>
using namespace std;
void print7(int n){
    for(int i=1; i<=n; i++){
        for(int s=1; s<=n-i; s++){
            cout<<" ";
        }
        for(int j=1; j<=2*i-1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    print7(n);
}
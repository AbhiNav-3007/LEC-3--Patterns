/*print:- at n=5
* * * * * * * * * 
  * * * * * * *
    * * * * * 
      * * * 
        *
*/

#include<bits/stdc++.h>
using namespace std;
void print8(int n){
    for(int i=1; i<=n; i++){
        for(int s=1; s<=i-1; s++){
            cout<<" ";
        }
        for(int j=1; j<=2*n-(2*i-1); j++){
            cout<<" * ";
        }cout<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        print8(n);
    }
}
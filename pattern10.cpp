/*print:-
*
* *
* * *
* * * * 
* * * * *
* * * *
* * *
* * 
*
*/

#include<bits/stdc++.h>
using namespace std;
void print10(int n){
    for(int i=1;i<=n; i++){
        for(int j=1; j<=i ;j++){
            cout<<" * ";
        }cout<<endl;
    }
    for(int i=2;i<=n; i++){
        for(int j=1; j<=n-i+1 ;j++){
            cout<<" * ";
        }cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    print10(n);
}
/*print:-
A A A A A 
B B B B
C C C 
D D
E*/

#include<bits/stdc++.h>
using namespace std;
void print16(int n){
    for(int i=1;i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            cout<<char(i+64)<<" ";
        }cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    print16(n);
}
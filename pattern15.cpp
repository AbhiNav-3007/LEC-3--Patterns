/*print:-
A B C D E
A B C D
A B C
A B
A*/

#include<bits/stdc++.h>
using namespace std;
void print15(int n){
    for(int i=1;i<=n; i++){
        for(int j=1; j<=n-i+1 ;j++){
            cout<<(char)(j+64); ;
        }cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    print15(n);
}
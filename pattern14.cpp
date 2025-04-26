/*print:-
A 
A B
A B C
A B C D
A B C D E
*/
#include<bits/stdc++.h>
using namespace std;
void print14(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<(char)(j+64);
        }cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    print14(n);
}
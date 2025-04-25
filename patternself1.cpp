/* print:-
5 4 3 2 1
5 4 3 2
5 4 3
5 4
5
*/
#include<bits/stdc++.h>
using namespace std;
void printself1(int n){
    for(int i=n;i>=1; i--){
        for(int j=i; j>=1; j--){
            cout<<j ;
        }cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    printself1(n);
}
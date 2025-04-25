/*print:- at n=5
1
1 2
1 2 3
1 2 3 4 
1 2 3 4 5
*/
#include<bits/stdc++.h>
using namespace std;
void print3(int n){
    for(int i=1;i<=n; i++){
        for(int j=1; j<=n ;j++){
            cout<<" * ";
        }cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    print3(n);
}
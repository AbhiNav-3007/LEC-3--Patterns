/*print:-
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15 */
#include<bits/stdc++.h>
using namespace std;
void print13(int n){
    int s=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<" "<<s<<" ";
            s++;
        }cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    print13(n);
}
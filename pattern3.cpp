#include <iostream>
using namespace std;
int main(){
    int n,row,i,space;
    cin>>n;
    row = 1;
    while (row<=n){
        space =1;
        while (space<=row-1){


            cout<<' ';
            space=space+1;}
        i =1;
        while (i <= n - row+1){
            cout<<'*';
            i = i+1;
                     }
        cout<<'\n';
        row = row+1;
     }
     return 0;
 }

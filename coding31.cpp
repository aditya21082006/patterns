#include <iostream>
using namespace std;
int main() {

    int row,i,n;
    cin>>n;
    row=1;
    while (row<=n){
               i =n;
               while (i>=1){
                    if (i==row){
                        cout<<"* ";
                        i = i-1;
                    }
                    else{

                        cout<<i<<" ";
                        i = i-1; }
                        }
               cout<<"\n";
               row = row+1;}
    return 0;}


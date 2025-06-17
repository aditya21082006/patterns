#include <iostream>
using namespace std;
int main() {

    int no,row,col,n;
    cin>>n;


    row=1;

    while(row<= n){
        if (row%2==0){
            no =0;}
        else{
          no =1;}
        for(col=1;col<=row;col++){
            cout<<no<<" ";
            no = 1-no; }
        cout<<endl;

        row = row +1;
    }
    return 0;}

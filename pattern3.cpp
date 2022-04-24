#include<iostream>
using namespace std;
int main(){

    int n=4;
    for(int row=1;row<=n;row++){
        //for each row
        for(int col=1;col<=n-row+1;col++){
            
            cout<<"*";
        }
        //after each row

        cout<<endl;
    }
}
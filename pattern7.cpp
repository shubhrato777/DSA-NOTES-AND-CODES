#include<iostream>
using namespace std;
int main(){
    int n=6;

    for(int row=1;row<=n;row++){
        //for each row

        //spaces
        for(int col=1;col<=row-1;col++){
            cout<<" ";
        }
        for(int col=1;col<=n-row+1;col++){
            cout<<" *";
        }
        cout<<endl;
    }
}
#include<iostream>
using namespace std;
int main(){
    int n=6;
    int col;
    for(int row=1;row<=n;row++){
        for(int col=1;col<=row;col++){
            cout<<col;

        }
        if(row==1 || row==n){
            for(int col=1;col<=row;col++){
                cout<<col;
  
            }
           
        }
        else{
            cout<<col;
            for(int col=1;col<=row-2;col++){
                cout<<" ";
            }
        }
        cout<<endl;
        
    }
    
}
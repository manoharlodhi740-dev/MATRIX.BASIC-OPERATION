// ADDISION OF whole matrix IN 3X3 ORDER`S MATRIX
#include<iostream>
using namespace std;

int main(){
 int mat[3][3],sum=0,i,j;
 cout<<"enter matrix value";
 for(i=0; i<=2; i++){
    for(j=0; j<=2; j++){
        cin>>mat[i][j];
       
    }
 }
 for(i=0; i<=2; i++){
    for(j=0; j<=2; j++){
        cout<<mat[i][j]<<" ";
       
    }
    cout<<endl;

 }
 for(i=0; i<=2; i++){
    for(j=0; j<=2; j++){
        sum+=mat[i][j];
    }

}
cout<<"SUM OF ALL MATRIX:"<<sum<<endl;

}
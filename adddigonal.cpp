    // ADDISION OF DIGONAL matrix IN 3X3 ORDER`S MATRIX
#include<iostream>
using namespace std;

int main(){
 int mat[3][3],sum1=0,sum2=0,i,j;
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
        if(i==j){
            sum1 +=mat[i][j];
        } 
        if(i+j==2){
                sum2 +=mat[i][j];
            }
            
    }
 }
 cout<<"L-R DIGONAL SUM:  "<<sum1<<endl;
 cout<<"R-L DIGONAL SUM:  "<<sum2;
}

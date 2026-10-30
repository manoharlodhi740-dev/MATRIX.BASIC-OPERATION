// ADDISION OF ROWS IN 3X3 ORDER`S MATRIX
#include<iostream>
using namespace std;

int main(){
 int mat[3][3],sum1=0,sum2=0,sum3=0,i,j;
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
        if(i==0){
            sum1+= mat[i][j];
        }
        else
            if(i==1){
                sum2+=mat[i][j];

            }
            else{
                sum3+=mat[i][j];
            }

    }

}
cout<<"SUM OF FIRST ROW:"<<sum1<<endl;
cout<<"SUM OF SECOND ROW"<<sum2<<endl;
 cout<<"SUM OF THIRD ROW"<<sum3<<endl;
}
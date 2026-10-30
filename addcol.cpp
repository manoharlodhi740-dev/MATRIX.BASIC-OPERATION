// ADDISION OF column IN 3X3 ORDER`S MATRIX
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
 for(j=0; j<=2; j++){
    for(i=0; i<=2; i++){
        if(j==0){
            sum1+= mat[i][j];
        }
        else
            if(j==1){
                sum2+=mat[i][j];

            }
            else{
                sum3+=mat[i][j];
            }

    }

}
cout<<"SUM OF FIRST COLUMN:"<<sum1<<endl;
cout<<"SUM OF SECOND COLUMN"<<sum2<<endl;
 cout<<"SUM OF THIRD COLUMN"<<sum3<<endl;
}
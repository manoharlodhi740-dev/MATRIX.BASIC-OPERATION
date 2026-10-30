// SUBTRACTION OF two matrix IN 3X3 ORDER`S MATRIX
#include<iostream>
using namespace std;

int main(){
 int mat[3][3],mat1[3][3],sum,i,j,k,l;
 cout<<"ENTER VALUE OF MATRIX 1 :";
 for(i=0; i<=2; i++){
   for(j=0; j<=2; j++){
        cin>>mat[i][j];
       
    }
}
cout<<"ENTER VALUE OF MATRIX 2 :";
for(k=0; k<=2; k++){
    for(l=0; l<=2; l++){
        cin>>mat1[k][l];
       
    }
}
 cout<<"MATRIX1: "<<endl;
 for(i=0; i<=2; i++){
    for(j=0; j<=2; j++){
        cout<<mat[i][j]<<" ";
       
    }
    cout<<endl;
}

 cout<<"MATRIX2: "<<endl;
 for(k=0; k<=2; k++){
    for(l=0; l<=2; l++){
        cout<<mat1[k][l]<<" ";
       
    }
    cout<<endl;
}
cout<<"MATRIX AFTER SUBTRACTION"<<endl;
for(i=0; i<=2; i++){
    for(j=0; j<=2; j++){
        for(k=0; k<=2; k++){
             for(l=0; l<=2; l++){
                if(i==k && j==l){
                    cout<<mat[i][j]-mat1[k][l]<<" ";
                }
             }
        
            }
        }
        cout<<endl;
    }
    cout<<endl;
}

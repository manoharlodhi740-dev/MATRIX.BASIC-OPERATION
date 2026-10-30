// MULTIFICATION OF two matrix IN 3X3 ORDER`S MATRIX
#include<iostream>
using namespace std;

int main(){
 int mat[3][3],mat1[3][3],multi[3][3],k,i,j;
 for(i=0; i<=2; i++){
   for(j=0; j<=2; j++){
        multi[i][j]=0;
       
    }
}
 cout<<"ENTER VALUE OF MATRIX 1 :";
 for(i=0; i<=2; i++){
   for(j=0; j<=2; j++){
        cin>>mat[i][j];
       
    }
}
cout<<"ENTER VALUE OF MATRIX 2 :";
for(i=0; i<=2; i++){
   for(j=0; j<=2; j++){
        cin>>mat1[i][j];
       
       
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
 for(i=0; i<=2; i++){
   for(j=0; j<=2; j++){
        cout<<mat1[i][j]<<" ";
    }
    cout<<endl;
}
cout<<"MATRIX AFTER MULTIFICATION"<<endl;
for(i=0; i<=2; i++){
    for(j=0; j<=2; j++){
        for(k=0; k<=2; k++){
            multi[i][j]+=mat[i][k]*mat1[k][j];

             
        
            }
        }
       
    }
for(i=0; i<=2; i++){
   for(j=0; j<=2; j++){
        cout<<multi[i][j]<<" ";
       
    }
    cout<<endl;
}
}

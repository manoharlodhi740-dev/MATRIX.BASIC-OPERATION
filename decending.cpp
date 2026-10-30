// WAP TO INPUT 10 NUMBERS AND PRINT THEM IN DeCENDING ORDER
#include<iostream>
using namespace std;

int main(){
    int n[20],i,j,temp;

    cout<<"ENTER 10 NUMBER :";
    for(i=0; i<=9; i++){
        cin>>n[i];
    }

    for(i=0; i<=9; i++) {
        for(j=i+1; j<=9; j++){
            if(n[i]<n[j]){
                temp=n[i];
                n[i]=n[j];
                n[j]=temp;
                          }
         
        }
        cout<<endl;
    }
    for(i=0; i<=9; i++){
        cout<<n[i]<<endl;
    }
    return 0;
}

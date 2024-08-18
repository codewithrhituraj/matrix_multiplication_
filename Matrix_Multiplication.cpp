#include<iostream>
using namespace std;
int main(){

    // matrix multiplication happens when the first matrixes colums and second mtrixes rows size should be same 

    int n;
    int m;
    cout<<"Enter the rows of the first matrix :";
    cin>>n;
    cout<<"Enter the columns of the first matrix :";
    cin>>m;
    int a[n][m];

    int p,q;
    cout<<"Enter the rows of the second matrix :";
    cin>>p;
    cout<<"Enter the columns of the second matrix :";
    cin>>q;

    int b[p][q];

    if(m==p){
     cout<<"Enter the elements of the first matrix: ";
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
     }

       for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cin>>b[i][j];
        }
    }

    // the resultent matrix :
    int res[n][q];
    for(int i=0;i<n;i++){
        
        for(int j=0;j<q;j++){
            for(int k=0;k<p;k++){
                  res[i][j] +=a[i][k]*b[k][j];
            }
          
        }
    }



    }

    else {

        cout<<"The matrixes cannt be multiplied.";
    }
    

}
//print all pairs of element 

#include<bits/stdc++.h>
using namespace std;


void printAllPairs(int a[], int n){

    for(int i=0;i<n-1;i++){
        int x=a[i];
        for(int j=i+1; j<n;j++){
            int y=a[j];
            cout<<x<<" , "<<y<<endl;
        }
        cout<<endl;
    }
    

}

int main(){

    int a[]={4,5,9,6,1,2,3};
    int n= sizeof(a)/sizeof(int);

   //for each loop  
    for(int x: a){
        cout<< x <<" ";
    }
    cout<<endl;

    printAllPairs(a,n);
}
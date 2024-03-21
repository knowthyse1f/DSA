#include<iostream>
using namespace std;

//pass by refarence 
void printArray(int a[], int s){

    cout<<"In function : "<<sizeof(a)<<endl;
//this will give give you only the size of reffarence 
    int n= sizeof(a)/sizeof(int);

//for this you will get output for two value from the this loop 

    cout<<"Using function size : ";
     for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

//int this loop you use the value of size from the main function so
//it  will give the output of full array
    cout<<"Use the value passing from main: ";
     for(int i=0;i<s;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

}

int main(){

    int a[]={4,5,9,6,1,4,3};
    
    int n= sizeof(a)/sizeof(int);

    cout<<"In  Main : "<<sizeof(a)<<endl;

    printArray(a,n);

    cout<<"In main function: ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
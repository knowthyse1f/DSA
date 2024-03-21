#include<bits/stdc++.h>
using namespace std;

int main(){
    int marks[100];
    int n;
    cout<<"Enter the no of students : ";
    cin>>n;

    //input 
    for(int i=1;i<=n;i++){
        cin>>marks[i];
    //update
        marks[i]=marks[i]*2;
    }

    //output

    for(int i=1;i<=n;i++){
        cout<<marks[i]<<" ";
    }
    cout<<endl;

    return 0;


    }
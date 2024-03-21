//print all sub array 
//find sum of all sub array (bruteforce approch ) 

#include<bits/stdc++.h>
using namespace std;

void printSubarray(int a[],int n){
    int maxsum=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                int sum=0;
                for(int k=i;k<=j;k++){
                    sum=sum+a[k];
                    cout<<a[k]<<", ";
                }
                cout<<endl;
                if(sum>maxsum)maxsum=sum;
               // cout<<"sum : "<<sum<<endl;
            }
            
        }
        cout<<"maxsum: "<<maxsum<<endl;
}


int main(){

    int a[]={4,-5,9,-6,1,-2,3};
    int n= sizeof(a)/sizeof(int);

    printSubarray(a,n);

return 0;
}
//prefix sum (find max sum of sub arry)
//timme complexity o(1)

#include<bits/stdc++.h>
using namespace std;

void prefixSum(int a[],int n){
    
    int maxsum=0;
    int prefix[n]={0};
    prefix[0]=a[0];

    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]+a[i];
    }
    

        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){

                //use turnary operator 
                //if i > 0 than  prefix[j]-prefix[i-1]
                //else prefix[j]
                int sum= i>0 ?prefix[j]-prefix[i-1]: prefix[j];
                if(sum>maxsum)maxsum=sum;
            }
            
        }
        cout<<"maxsum: "<<maxsum<<endl;
}

int main(){

    int a[]={4,-5,9,-6,1,-2,3};
    int n= sizeof(a)/sizeof(int);

    prefixSum(a,n);
}

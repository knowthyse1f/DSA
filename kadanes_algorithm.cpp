//kadane's algorithm
//time complexity O(n) 
#include<bits/stdc++.h>
using namespace std;

int maximum_subarray_sum(int a[], int n){
     int cs=0;
     int largest=0;
     for(int i=0;i<n;i++){
        cs+=a[i];
        if(cs<0)cs=0;
        if(cs>largest)largest=cs;
     }
     return largest;

}

int main(){

    int a[]={4,-5,9,-6,1,-2,3};
    int n= sizeof(a)/sizeof(int);

    cout<<maximum_subarray_sum(a,n)<<endl;

    return 0;
}

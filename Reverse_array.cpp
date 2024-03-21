//reverse all the element
//don't use extra memory

//time complexity O(n)
//space complexity O(1)

#include<bits/stdc++.h>
using namespace std;

void reverseArray(int a[], int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        swap(a[s],a[e]);
        s++;e--;
    }

}

int main(){
    int a[]={4,5,9,6,1,4,3};
    int n= sizeof(a)/sizeof(int);
    reverseArray(a,n);

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
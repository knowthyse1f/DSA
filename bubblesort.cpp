//Bubble sort 
/* Take the larger element to the end by 
repeatedly swapping the adjacent elements
*/

#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int a[], int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(a[j]>a[j+1])swap(a[j],a[j+1]);
        }
    }


}


int main(){
    int a[]={4,5,9,6,1,4,3};
    int n=sizeof(a)/sizeof(n);

    bubble_sort(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

}
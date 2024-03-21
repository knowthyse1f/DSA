// linear search (Bruteforce)
//compexity O(N)
#include<iostream>
using namespace std;

int linear_search(int a[], int n, int key){

    for(int i=0;i<n;i++){
        //check if current element matches with the key
        if(a[i]==key){
            return i;
        }
    }
    return -1;
}

int main(){
    int a[]={4,5,9,6,1,4,3};
    int key;
    int n=sizeof(a)/sizeof(int);

    cin>>key;
    int index=linear_search(a,n,key);

    if(index!=-1)
    cout<<key<<" is present at index "<< index<<endl;
    else
    cout<<key<<" is not present"<<endl;
    return 0; 
}

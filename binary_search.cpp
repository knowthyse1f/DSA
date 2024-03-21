//Binary Search 
//must be sorted 

//start point and end point find mid point 
//if mid point is key than terminate it
//if key is left than seacrh only start to mid point so mid point made end
// if key is right than search mid+1 to end so mid become starting point 

// it do until start>=end

//time complexity log(n)
//fast and efficient 

// search space is monotonic (non increaing and non deacreasing )



#include<iostream>
using namespace std;

int binary_search(int a[], int n, int key){
    int start=0;
    int end= n-1;
    int mid=(start+end)/2;
    while(start<=end){
        if(a[mid]==key)return mid;
        else if(a[mid]>key){
            end=mid-1;
            mid=(start+end)/2;
        }
        else{
            start=mid+1;
            mid=(start+end)/2;
        }
    }
    return -1;
}

int main(){
    int a[]={2,9,45,66,78,4596};
    int key;
    int n=sizeof(a)/sizeof(int);

    cin>>key;
    int index=binary_search(a,n,key);

    if(index!=-1)
    cout<<key<<" is present at index "<< index<<endl;
    else
    cout<<key<<" is not present"<<endl;
    return 0; 
}

//vector are  sequence containers 
//representing arrays that can change in size 
// in function vector are passed by value 

#include<bits/stdc++.h>
using namespace std;

int main(){
    //vemo vecotr
    vector<int> a={4,5,9,6,1,4,3};

    //fill constructor size 10 ,value 7
    vector<int> b(10,7);
    for(int i=0;i<b.size();i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;

    //delete any element by pop_back()
    a.pop_back();

    //push_back O(1) for insert element
    a.push_back(567);

    //print all elements
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;


    //size of vector (no of element)

    cout<<a.size()<<endl;

    //Capacity of the vector
    cout<<a.capacity()<<endl;
}
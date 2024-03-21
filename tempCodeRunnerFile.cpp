
    //delete any element by pop_back()
    a.pop_back();

    //push_back O(1) for insert element
    a.push_back(567);

    //print all elements
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
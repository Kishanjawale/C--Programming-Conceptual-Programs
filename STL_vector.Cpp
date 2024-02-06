#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v1;
    register int i;
    for( i = 1 ; i <= 5 ; i++)
    {
        v1.push_back(i); //for Pushing elements into the vector.
    }
    
    cout<<"Size of vector: "<<v1.size()<<endl;
    cout<<"Capacity of Vector: "<<v1.capacity()<<endl;
    cout<<"Max Size of vector: "<<v1.max_size()<<endl;
    
    
    v1.resize(4); //To resize the vector
    cout<<"New Size:"<<v1.size()<<endl;

    if(v1.empty() == false)
    {
        cout<<"Vector is not empty"<<endl;
    }
    else
    {
        cout<<"Vector is empty"<<endl;
    }

    v1.shrink_to_fit();
    cout<<"Vector Elements are:"<<endl;
    for(auto it = v1.begin(); it != v1.end();it++)
    {
        cout<<*it<<" ";

    }
    return 0;
}


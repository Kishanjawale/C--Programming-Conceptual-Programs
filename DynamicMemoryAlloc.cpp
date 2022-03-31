#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////
//Description:This program just Demonstrate the concept of Dynamic Memory Allocation and Deallocation in CPP
//@Author:Kishan Jawale
//Date: 31/03/2022
///////////////////////////////////////////////////////////////////////////////////////

int main()
{

    int Size=0;
    int *ptr=NULL;  // initializing ptr to NULL
    cout<<"Enter the Size of Array"<<"\n";
    cin>>Size;
    int iArr[Size];         //Declaration of Array...

    ptr=new int[Size]; //As there is Malloc function in c programming in cpp there is new function 
                           //which is used to allocate memory..... //Crogramming syntax for same operation "ptr=(int*)malloc(sizeof(int)*Size);"

    if(ptr== NULL)
        {
             cout<<"Memory allocation request rejected"<<"\n";
        }

    else
        {
            cout<<"Memory is allocated Successfully"<<"\n";
            cout<<(sizeof(int)*Size) <<"Bytes Total Memory Allocated"<<"\n";
        }
    
    
    delete []ptr;           //As there is free function in c programming in cpp there is delete function 
                           //which is used to deallocate the allocated memory
    
    return 0;

}
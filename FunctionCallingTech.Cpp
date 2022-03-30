#include<iostream>
using namespace std;
//////////////////////////////////////////////////////////////////////////////////////
//Class name: Demo
//Description:This program Demonstrate the Ways of Function Calling
//Author:Kishan Jawale
//Date: 30/03/2022
//There are 3 Ways  by Which we can call the Function  in Class:
//      1.Call By Value
//      2.Call By Address
//      3.Call By Reference 
//Reference: reference is nothing but alternative or second name of a varible 
///////////////////////////////////////////////////////////////////////////////////////
 
class Demo
{
    public:  //Access Specifer

    //Behaviours
    int CallValaue(int iX)
    {
        iX++;
    }

    int CallAddress(int *p)
    {
        (*p)++;   //incrementing the value of variable present at location p
    }

    int CallReference(int &reference)
    {
        reference++;
    }
};


int main()  //Entry Point Function  
{
     int iA=10;
 int iB=10;
    int iC=10;

    Demo dobj;//Object Creation 
        dobj.CallValaue(iA);      //Function Call By Value
            cout<<iA<<"\n";      // Expected Output --- 10 ........
                                //the reason that  value of iA is not incrementing is that 
                               //we are copying the value of iA in iX varibale and  incrementing the value of iX
    
        dobj.CallAddress(&iB);    //Function Call By Address
            cout<<iB<<"\n";      // Expected Output --- 11

        dobj.CallReference(iC);  //Function Call By Reference
            cout<<iC<<"\n";     // Expected Output --- 11 
    
     return 0;
}

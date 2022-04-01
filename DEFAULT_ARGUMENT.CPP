#include<iostream>

//////////////////////////////////////////////////////////////////////////
//Function name : Area
//Input : Accept  1 or 2 float values
//Output: Give the area of Circle
//Description:This program Demonstrate the concept of Default Arguments in C++
//@Author:Kishan Jawale
//Date: 2/04/2022
///////////////////////////////////////////////////////////////////////////
 
using namespace std;
float Area(float fRadius,float PI=3.14) //here  PI is defalut argument initialized to 3.14
{   
    float fAns=0;
    fAns = PI*(fRadius*fRadius);
    return fAns;
}

int main()                //entry point function
{
    float fRet=0;
    float Radius=0;
    cout<<"Enter the Area of Circle"<<"\n";
    cin>>Radius;
    fRet=Area(Radius);  //Here we are just passing one paratmeter to Area function because 
                       //we have already declared the default vlaue of PI in Function Defination
    cout<<"Area of Circle:"<<fRet<<"\n";

    fRet=Area(Radius,3.14);
    cout<<"Area of Circle:"<<fRet<<"\n";//here we passed both parameters to the function
                                       //In case if we do not pass second parameter in our program 
                                      //then compiler will consider the default arguments of the function in our case it is PI=3.14 
    return 0;
}
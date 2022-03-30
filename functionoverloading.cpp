#include<iostream>
 
using namespace std;

//////////////////////////////////
//Class name: Demo
//Description:This code is just for explaining the concept of FUNCTION OVERLOADING in C++
//Author:Kishan Jawale
//Date: 20/03/2022
///////////////////////////////////
class Demo
{

public:
    int Addition(int No1, int No2)//1000 --Imaginary address
    //Addition@2ii --this is Name Mangling 
    {
        int Ans=0;
        Ans=No1+No2;
        return Ans;
    }

    int Addition(int No1, int No2, int No3)//2000
        //Addition@3iii -- MANGLED NAME 
    {
        int Ans=0;
        Ans=No1+No2+No3;
        return Ans;
    }

    int Addition(int No1, int No2, int No3,int No4)//3000
        //Addition@4iiii
    {
        int Ans=0;
        Ans=No1+No2+No3+No4;
        return Ans;
    }

};
int main()
{
    int iRet=0;
    Demo obj;
    //PUSH 100   this is assemly 
    //PUSH 200
    //CALL 1000  
    iRet=obj.Addition(100,200);
    cout<<"addition="<<iRet<<"\n";
    
    //PUSH 100
    //PUSH 200
    //PUSH 300
    //CALL 2000
    iRet=obj.Addition(100,200,300); //obj.Addition@3iii(100,200,300)
    cout<<"addition="<<iRet<<"\n";

    //PUSH 100
    //PUSH 200
    //PUSH 300
    //PUSH 400
    //CALL 3000    
    iRet=obj.Addition(100,200,300,400); //obj.Addition@4iiii(100,200,300,400)
    cout<<"addition="<<iRet<<"\n";
    
    return 0;
}
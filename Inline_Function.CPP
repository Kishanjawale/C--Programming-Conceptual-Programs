#include<iostream>
using namespace std;
class inlineDemo
{
    //inline function is just a request if the request is accepted then it 
    //is considered as inline otherwise it is consideres as normal function.
    //Generally we should avoid to write complex logic or recursive code or logic containing larger data types.  
    public :
    inline int Addition(int iNo1,int iNo2) 
    {
        int Result=0;
        
        cout<<"inside inline function"<<endl;
        Result=iNo1+iNo2;
        return Result;
    }

};
int main()
{
    inlineDemo ILD; // object creation
    
    int AdditionResult=ILD.Addition(11,21); //calling inline function.
    
    cout<<"Addition:"<<AdditionResult;
    return 0;
}
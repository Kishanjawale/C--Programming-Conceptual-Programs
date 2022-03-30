#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////
//Class name: Demo
//Description:This program Demonstrate the concept of constructor in C++
//Author:Kishan Jawale
//Date: 29/03/2022
//There ara 3 types of Constructors:
//      1.Default  Constructor
//      2.Parametarized Constructor
//      3.Copy Constructor
//IMPORTANT-
//      Constructor Do Not have any Types
///////////////////////////////////////////////////////////////////////////
 
class Demo
{
    public:  //Access Specifer

    int iX; //characteristic
    int iY; //characteristic
        
        
        //Behaviours
    Demo()  // Default Constructor--This  Constructor is not accpeting any parameter hence it is called as default constructor.
    {
        cout<<"Inside Default Constructor\n";
    }
    
    
    Demo(int iA, int iB) //Parameterized Constructor---Because it accpets parameters 
    {
        cout<<"Inside Parameterized Constructor\n";
    }

    Demo(Demo &reference)  //Copy Constructor---This function accepts the object of same class hence it is called as copy constructor
    {
       cout<<"Inside Copy Constructor\n";
        iX=reference.iX;
        iY=reference.iY;
    }    
    
    ~Demo() //Destructor
    {
        cout<<"Inside Destructor\n";
    }
};


int main()  //Entry Point Function  
{
    Demo dobj(11,21);    //Creating the Object of class Demo
    Demo dobj1(dobj);    //passing the object as parameter of same class to  an object (For Copy Constructor)
    return 0;
}
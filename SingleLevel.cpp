#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////
//Class Names : Base & Derived
//@Author:Kishan Jawale
//Date: 2/04/2022
//Description:This program Demonstrate the concept of Single Level Inheritance in C++
//In single level inheritance there is only one base class and only one derived class
///////////////////////////////////////////////////////////////////////////

class Base
{  
     public:        //Access Specifier
     int X;        //characteristics
     int Y;       //characteristics

    Base()
    {
         cout<<"Base class Constructor"<<"\n";
    }

    ~Base()
    {
         cout<<"Base class Destructor"<<"\n";
    }

};

class Derived: public Base // Class Derived is Derieving Behaviours from Base
{
    public:      //Access Specifier 
    int A;      //characteristics
    int B;     //characteristics

    Derived()
    {
        cout<<"Derived class Constructor"<<"\n";
    }

    ~Derived()
    {
        cout<<"Derived class Destructor"<<"\n";
    }
};

int main()
{
    Derived dobj; // Creating the Object of Derived class

    return 0;
}

/*Expected Output:
    Base class Constructor
    Derived class Constructor
    Derived class Destructor
    Base class Destructor
*/
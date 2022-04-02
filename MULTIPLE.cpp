#include<iostream>
using namespace std;
//////////////////////////////////////////////////////////////////////////
//Class Names : Base & Base & Derived
//@Author:Kishan Jawale
//Date: 2/04/2022
//Description:This program Demonstrate the concept of Multiple  Inheritance in C++
//In below code there are 3 class Base , Base1 ,Derived
//In case of Multiple inheritance there are 2 base classes and one derived class from 2 base classes
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

class Base1 
{
    public:      //Access Specifier 
    int A;      //characteristics
    int B;     //characteristics

    Base1()
    {
        cout<<"Base1 class Constructor"<<"\n";
    }

    ~Base1()
    {
        cout<<"Base1 class Destructor"<<"\n";
    }
};

class Derived: public Base, public Base1 // Class Derived  is derived from BASE, BASE1
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
Base1 class Constructor
Derived class Constructor
Derived class Destructor
Base1 class Destructor
Base class Destructor
*/
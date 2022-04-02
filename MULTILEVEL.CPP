#include<iostream>
using namespace std;
//////////////////////////////////////////////////////////////////////////
//Class Names : Base & Derived & Derived1
//@Author:Kishan Jawale
//Date: 2/04/2022
//Description:This program Demonstrate the concept of Multi Level Inheritance in C++
//In below code there are 3 class Base , Derived ,Derived1
//The Constructor gets called in sequence in which classes are inherited
//The Destructor gets called in reverse order in which Constructor got called
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

class Derived1: public Derived // Class Derived is Derieving Behaviours from Base
{
    public:      //Access Specifier 
    int A;      //characteristics
    int B;     //characteristics

    Derived1()
    {
        cout<<"Derived-1 class Constructor"<<"\n";
    }

    ~Derived1()
    {
        cout<<"Derived-1 class Destructor"<<"\n";
    }
};

int main()
{
    Derived1 dobj; // Creating the Object of Derived1 class

    return 0;
}

/*Expected Output:
Base class Constructor
Derived class Constructor
Derived-1 class Constructor
Derived-1 class Destructor
Derived class Destructor
Base class Destructor
*/
#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////
//Description:This program just Demonstrate the concept of Reference & Pointers in CPP
//@Author:Kishan Jawale
//Date: 31/03/2022
//IMPORTANT-
//   Reference:Reference is an alternative name for an existing variable.
//   A variable can be declared as a reference by putting ‘&’ in the declaration. 
///////////////////////////////////////////////////////////////////////////////////////

 int main()
{

    //concept of Reference to Varibale And Concept of Multiple Reference to single varible
        
        int iNo=10;
        int &Z =iNo;              
        int &X = iNo;         // X is reference of iNo
        int &Y = X;          // Y is refernce of X

        cout<<"Value of X:"<<Z<<"\n";       //Expected Output:10
        cout<<"Value of X:"<<X<<"\n";       //Expected Output:10
        cout<<"Value of Y:"<<Y<<"\n";       //Expected Output:10



    //concept of Pointer to Referene

         int iA=11;
         int &iB=iA;             //here iB is reference of iA
         int *ptr=&iB;          //here ptr is pointer which holds address of iB &iA ....beacause iB is reference of iA

         cout<<"Address of iA:"<<ptr<<"\n";     //Expected Output:<random address>




    //Concept of Refernce to Pointer
    
         int iNumber=21;
         int *p=&iNumber;                //here we creted a pointer to iNumber Variable
         int *(&q)=p;                    //here we creted a reference to pointer

        cout<<"Value of iNumber is :"<<(*p)<<"\n";    //  Expected Output:21
        cout<<"Value of iNumber is :"<<(*q)<<"\n";   //Expected Output:21


    return 0;
 }
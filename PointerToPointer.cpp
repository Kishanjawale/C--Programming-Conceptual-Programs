#include<iostream>
using namespace std;
//////////////////////////////////////////////////////////////////////////////////////
//Description:This program just Demonstrate the concept of Pointer to Pointer 
//@Author:Kishan Jawale
//Date: 31/03/2022
//IMPORTANT-
//   Size of Pointer varries from compilor to compilor
//  for a 32 bit compilor the pointer size can be 4 bytes for a 64 bit compilor the pointer size can be 8 bytes.
///////////////////////////////////////////////////////////////////////////////////////
 
int main()
{
    int iNo=20;              //Integer iNO Intialization
    int *p=&iNo;            // P is pointer pointing to iNo 
    int **q=&p;            // q is pointer pointing to p 
    int ***r=&q;          // r is pointer pointing to q
    int ****s=&r;        // s is pointer pointing to r         
    int *****t=&s;      // t is pointer pointing to s

    cout<<"Size of Int:"<<sizeof(iNo)<<"\n";         //Expected output:4
    cout<<"Size of Pointer:"<<sizeof(p)<<"\n";      //Expected output:4 / 8  ........The size of pointer varries from compilor to compilor....
                                                   //my compilor  is 32 bit so size of pointer  is 4 bytes........
                                                  //if your compiler is 64 bit it can give 8 bytes
    cout<<"Value of No="<<*pt<<"\n";             //Expected output: 2
    cout<<"Value of No="<<**q<<"\n";            //Expected output: 20
    cout<<"Value of No="<<***r<<"\n";          //Expected output: 20
    cout<<"Value of No="<<****s<<"\n";        //Expected output: 20
    cout<<"Value of No="<<*****t<<"\n";      //Expected output: 20
    
    return 0;
}
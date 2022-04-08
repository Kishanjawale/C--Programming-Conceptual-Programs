#include<iostream>
using namespace std;
//////////////////////////////////////////////////////////////////////////
//Class Name :Volume 
//@Author:Kishan Jawale
//Date: 07/04/2022
//Description:This Function Takes Side as Arguments/Input And returns Volume Of Cube  
///////////////////////////////////////////////////////////////////////////

class Volume 
{
    public:

    float FindVolume(float Side)
    {

    float Volume=0;
    Volume=(Side*Side*Side);

    return Volume; 
    }
};


int main()
{
        //Variable Declaration
     float fSide=0;
     float fVolume=0;

        //Accepting input from User
     cout<<"Enter the Side of Cube:\n";
     cin>>fSide;

    Volume V1;
    

     fVolume=V1.FindVolume(fSide);  //Calling The function FindVolume 
     cout<<"Volume of Cube:"<< fVolume<<"\n";

    return 0;
}

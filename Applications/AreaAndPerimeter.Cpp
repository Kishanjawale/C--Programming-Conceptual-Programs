#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////
//@Author:Kishan Jawale
//Date: 08/04/2022
//Description:This Application Takes the input from user and perform Various 
//            Operations like:
//                    find Area of Rectangle
//                    find Area of Square
//                    find Area of Circle
//                    find Perimeter of Rectangle
//                    find Perimeter of Square
//                    find Perimeter of Circle
//
///////////////////////////////////////////////////////////////////////////

float PeriRectangle(float Length,float Width)
{
    float PeriRect=0;
    PeriRect= 2*(Length+Width);
    
    return PeriRect; 
}

float PeriSquare(float Side)
{
    float PeriSqa=0;
    PeriSqa=(4*Side);

    return PeriSqa; 
}

float PeriCircle(float Radius)
{
    float PeriCircle=0;
    float PI=3.14;
    PeriCircle = (2*PI*Radius);
    return PeriCircle; 
}

float AreaRectangle(float Length,float Width)
{
    float AreaRect=0;
    AreaRect=Length*Width;
    
    return AreaRect; 

}

float AreaSquare(float Side)
{
    float AreaSqa=0;
    AreaSqa=Side*Side;

    return AreaSqa; 
}

float AreaCircle(float Radius)
{
    float AreaCircle=0;
    float PI=3.14;
    AreaCircle=PI*(Radius*Radius);

    return AreaCircle; 
}



float SquarePerimeter()
{
    float fSide=0;
    float fArea=0;
    cout<<"Enter Side of Square"<<"\n";
    cin>>fSide;
    fArea=PeriSquare(fSide);    //Calling Function PeriSquare()
    cout<<"Perimeter of Square="<<fArea<<"\n";
}


float RectPerimeter()
{
    float fLenghth=0;
    float fWidth=0;
    float fArea=0;
    cout<<"Enter Length of Rectangle"<<"\n";
    cin>>fLenghth;
    cout<<"Enter Width of Rectangle"<<"\n";
    cin>>fWidth;
    fArea=PeriRectangle(fLenghth,fWidth);   //Calling Function PeriRectangle()
    cout<<"Perimeter of Rectangele="<<fArea<<"\n";
}
    

float CirclePerimeter()
{
    float fRadius=0;
    float fArea=0;
    cout<<"Enter Radius of Circle"<<"\n";
    cin>>fRadius;
    fArea=PeriCircle(fRadius);  //Calling Function PeriCircle()
    cout<<"Perimeter of Circle="<<fArea<<"\n";
}


float SquareArea()
{
    float fSide=0;
    float fArea=0;
    cout<<"Enter Side of Square"<<"\n";
    cin>>fSide;
    fArea=AreaSquare(fSide);    //Calling Function AreaSquare()
    cout<<"Area of Square="<<fArea<<"\n";
}


float RectArea()
{
    float fLenghth=0;
    float fWidth=0;
    float fArea=0;
    cout<<"Enter Length of Rectangle"<<"\n";
    cin>>fLenghth;
    cout<<"Enter Width of Rectangle"<<"\n";
    cin>>fWidth;
    fArea=AreaRectangle(fLenghth,fWidth);   //Calling Function AreaRectangle()
    cout<<"Area of Rectangele="<<fArea<<"\n";
}
    

float CircleArea()
{
    float fRadius=0;
    float fArea=0;
    cout<<"Enter Radius of Circle"<<"\n";
    cin>>fRadius;
    fArea=AreaCircle(fRadius);  //Calling Function AreaCircle()
    cout<<"Area of Circle="<<fArea<<"\n";
}



int main() //Entry point Function
{
    int No1=0;
    cout<<"Enter 1 To Perform operation on Rectangle shape"<<"\n";
    cout<<"Enter 2 To Perform operation on Square shape"<<"\n";
    cout<<"Enter 3  To Perform operation on Circle shape"<<"\n";
    
    cin>>No1;  //Accepting the Number of Operation User wants to perform

    switch (No1)
    {   
        
        case 1:
                int ino1;
                cout<<"Enter 1 To find Area of Rectangle"<<"\n";
                cout<<"Enter 2 To find Perimeter of Rectangle"<<"\n";
                
                cin>>ino1;

                switch (ino1)
                {
                    case 1:
                            RectArea();  
                            abort();
                    break;

                    
                    case 2:
                        RectPerimeter();
                        abort(); 
                    break;


                    default:
                        cout<<"!!!!!!!!! Invalid Input !!!!!!!!!"<<"\n";                
                        abort();
                    break;
                
                }


        case 2:
                int ino2;            
                cout<<"Enter 1 To find Area of Square"<<"\n";
                cout<<"Enter 2 To find Perimeter of Square"<<"\n";

                cin>>ino2;

                switch (ino2)
                {
                    case 1:
                            SquareArea(); 
                            abort();
                    break;


                    case 2:
                        SquarePerimeter();
                        abort(); 
                    break;


                    default:
                        cout<<"!!!!!!!!! Invalid Input !!!!!!!!!"<<"\n";
                    break;
                    abort();
                }


        case 3:
                int ino3;  
                cout<<"Enter 1 To find Area of Circle"<<"\n";
                cout<<"Enter 2 To find Perimeter of Circle"<<"\n";
            
                cin>>ino3;

                switch (ino3)
                {
                    case 1 :
                            CircleArea();  
                            abort();
                    break;
                    
                    
                    case 2 :
                        CirclePerimeter(); 
                        abort();  
                    break;


                    default:
                        cout<<"!!!!!!!!! Invalid Input !!!!!!!!!"<<"\n";
                        abort();
                    break;
                }

        default: //Default Statement
            cout<<"!!!!!! invalid choice  !!!!!!"<<"\n";
            abort();
        break;
    }
    
   return 0;
}

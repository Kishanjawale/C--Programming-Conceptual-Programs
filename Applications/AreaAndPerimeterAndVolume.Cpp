#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////
//@Author:Kishan Jawale
//Date: 08/04/2022
//Description:
//In this application i have  used 2 user defined header files
//                   1.Perimeter.h(This file contain logic to find perimeter of shapes)
//                   2.Area.h(This file contain logic to find Area of shapes)   
/*
     This Application Takes the input from user and perform Various 
     Operations like:  
            Perform operation on Rectangle shape
            Perform operation on Square shape
            Perform operation on Circle shape   
            Perform operation on Triangle shape
            Perform operation on Cuboid  shape
            Perform operation on Sphere shape
            Perform operation on Cylinder shape
*/
///////////////////////////////////////////////////////////////////////////


float VolumeSphere(float Radius)
{
    float VolumeSphere=0;
    float PI=3.14; 
    VolumeSphere=((4/3)*PI*(Radius*Radius*Radius));
    return VolumeSphere;
}


float VolumeCylinder(float radius,float height)
{

 float VolumeCylinder=0;
    float PI=3.14; 
    VolumeCylinder=(PI*(radius*radius)*height);
    return VolumeCylinder;



}

float VolumeCuboid(float length,float width,float height)
{

    float VolumeCuboid=0;
    VolumeCuboid=(length*width*height);
    return VolumeCuboid;

}
float CuboidVolume()
{
    float fLength=0;
    float fHeight=0;
    float fWidth=0;
    float fVolume=0;
    cout<<"Enter Lenght of Cuboid"<<"\n";
    cin>>fLength;
    cout<<"Enter width of Cuboid"<<"\n";
    cin>>fWidth;
    cout<<"Enter Height of Cuboid"<<"\n";
    cin>>fHeight;
    fVolume=VolumeCuboid(fLength,fWidth,fHeight);   
    cout<<"Volume of Cuboid="<<fVolume<<"\n";
}

float CylinderVolume()
{
    float fHeight=0;
    float fRadius=0;
    float fVolume=0;
    cout<<"Enter Height of Cylinder"<<"\n";
    cin>>fHeight;
    cout<<"Enter Radius of Cylinder"<<"\n";
    cin>>fRadius;
    fVolume=VolumeCylinder(fRadius,fHeight);   
    cout<<"Volume of Cylinder="<<fVolume<<"\n";

}



float SphereVolume()
{
    float fRadius=0;
    float fVolume=0;
    cout<<"Enter Radius of Sphere"<<"\n";
    cin>>fRadius;
    fVolume=VolumeSphere(fRadius);   
    cout<<"Volume of Sphere="<<fVolume<<"\n";

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


float AreaTriangle(float base,float height)
{
    float AreaTriangle=0;
    AreaTriangle=(1.5*(base*height));

    return AreaTriangle; 
}



float AreaCuboid(float length,float breadth,float height)
{

    float AreaCuboid=0;

    AreaCuboid=(2*(( length*breadth)+(breadth*height)+(height*length)));
    return AreaCuboid;

}



AreaCylinder(float Radius,float Height)
{
     float AreaCylinder=0;
    float PI=3.14;
    AreaCylinder=((2*PI*Radius*Height)+(2*PI*(Radius*Radius)));

    return AreaCylinder; 

}


float AreaSphere(float Radius)
{
    float AreaSphere=0;
    float PI=3.14; 
    AreaSphere=(4*PI*(Radius*Radius));
    return AreaSphere;

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


float TriArea()
{
    float fBase=0;
    float fHeight=0;
    float fArea=0;
    cout<<"Enter Base of Triangle"<<"\n";
    cin>>fBase;
    cout<<"Enter Height of Triangle"<<"\n";
    cin>>fHeight;
    fArea=AreaTriangle(fBase,fHeight);   //Calling Function AreaTriangle()
    cout<<"Area of Triangle="<<fArea<<"\n";
}


float CuboidArea()
{
    float fLength=0;
    float fHeight=0;
    float fBreadth=0;
    float fSurfaceArea=0;
    cout<<"Enter Lenght of Cuboid"<<"\n";
    cin>>fLength;
    cout<<"Enter Breadth of Cuboid"<<"\n";
    cin>>fBreadth;
    cout<<"Enter Height of Cuboid"<<"\n";
    cin>>fHeight;
    fSurfaceArea=AreaCuboid(fLength,fBreadth,fHeight);   //Calling Function AreaTriangle()
    cout<<"Surface Area of Cuboid="<<fSurfaceArea<<"\n";
}

float CylinderArea()
{
    float fRadius=0;
    float fHeight=0;
    float fSurfaceArea=0;
    cout<<"Enter Radius of Cylinder"<<"\n";
    cin>>fRadius;
    cout<<"Enter Height of Cylinder"<<"\n";
    cin>>fHeight;
    fSurfaceArea=AreaCylinder(fRadius,fHeight);   
    cout<<"Surface Area of Cylinder="<<fSurfaceArea<<"\n";
}


float SphereArea()
{
    float fRadius=0;
    float fArea=0;
    cout<<"Enter Radius of Sphere"<<"\n";
    cin>>fRadius;
    fArea=AreaSphere(fRadius);   
    cout<<"Area of Sphere="<<fArea<<"\n";

}


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

float PeriTriangle(float side1,float side2,float side3)
{
        float PeriTriangle=0;
     PeriTriangle=side1+side2+side3;
     return PeriTriangle;
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


 float TrianglePerimeter()
 {
     float fSide1=0;
    float fSide2=0;
    float fSide3=0;
    float fPeri=0;
    cout<<"Enter Side2 of Triangle"<<"\n";
    cin>>fSide1;
    cout<<"Enter Side3 of Triangle"<<"\n";
    cin>>fSide2;
    cout<<"Enter Side1 of Triangle"<<"\n";
    cin>>fSide3;
    fPeri=PeriTriangle(fSide1,fSide2,fSide3);   //Calling Function AreaRectangle()
    cout<<"Perimeter of Triangle="<<fPeri<<"\n";
 }



int main()
{
    int No1=0;
    cout<<"Enter 1  To Perform operation on Rectangle shape"<<"\n";
    cout<<"Enter 2  To Perform operation on Square shape"<<"\n";
    cout<<"Enter 3  To Perform operation on Circle shape"<<"\n";
    cout<<"Enter 4  To Perform operation on Triangle shape"<<"\n";
    cout<<"Enter 5  To Perform operation on Cuboid  shape"<<"\n";
    cout<<"Enter 6  To Perform operation on Sphere shape"<<"\n";
    cout<<"Enter 7  To Perform operation on Cylinder shape"<<"\n";
    
    cin>>No1;  //Accepting the Number of Operation User wants to perform
    
    
    switch (No1)
    {   
        
        case 1: //Rectangle
                int ino1;
                cout<<"Enter 1 To find Area of Rectangle"<<"\n";
                cout<<"Enter 2 To find Perimeter of Rectangle"<<"\n";
                
                cin>>ino1;

                switch (ino1)
                {
                    case 1:
                            RectArea();  //Calling Function RecteArea()
                            abort();
                    break;

                    
                    case 2:
                        RectPerimeter();//Calling Function RectPerimeter()
                        abort(); 
                    break;


                    default:
                        cout<<"!!!!!!!!! Invalid Input !!!!!!!!!"<<"\n";                
                        abort();
                    break;
                
                }


        case 2://Sqaure
                int ino2;            
                cout<<"Enter 1 To find Area of Square"<<"\n";
                cout<<"Enter 2 To find Perimeter of Square"<<"\n";

                cin>>ino2;

                switch (ino2)
                {
                    case 1:
                            SquareArea();  //Calling Function SquareArea()
                            abort();
                    break;


                    case 2:
                        SquarePerimeter();  //Calling Function SquarePerimeter()
                        abort(); 
                    break;


                    default:
                        cout<<"!!!!!!!!! Invalid Input !!!!!!!!!"<<"\n";
                    break;
                    abort();
                }


        case 3://Circle 
                int ino3;  
                cout<<"Enter 1 To find Area of Circle"<<"\n";
                cout<<"Enter 2 To find Perimeter of Circle"<<"\n";
            
                cin>>ino3;

                switch (ino3)
                {
                    case 1 :
                            CircleArea();//Calling Function CircleArea()  
                            abort();
                    break;
                    
                    
                    case 2 :
                        CirclePerimeter();//Calling Function CirclePerimeter() 
                        abort();  
                    break;


                    default:
                        cout<<"!!!!!!!!! Invalid Input !!!!!!!!!"<<"\n";
                        abort();
                    break;
                }

        case 4://Triangle 
                int ino4;
                cout<<"Enter 1 To find Area of Triangle"<<"\n";
                cout<<"Enter 2 To find Perimeter of Triangle"<<"\n";
                
                cin>>ino4;

                switch (ino4)
                {
                    case 1:
                        TriArea(); //Calling Function TriArea(); 
                        abort();
                    break;

                    case 2:
                         TrianglePerimeter();//Calling Function TrianglePerimeter();
                        abort();
                    break;
                    
                    default:
                        cout<<"!!!!!!!!! Invalid Input !!!!!!!!!"<<"\n";
                        abort();
                    break;
                }
        case 5: //Cuboid
                int ino5;
                cout<<"Enter 1 To find Area of Cuboid"<<"\n";
                cout<<"Enter 2 To find Volume of Cuboid"<<"\n";
                
                cin>>ino5;

                switch (ino5)
                {
                    case 1:
                          CuboidArea();//Calling Function CuboidArea();
                          abort();  
                    break;

                    
                    case 2:
                       CuboidVolume();//Calling Function CuboidVolume();
                       abort();
                    break;

                    default:
                        cout<<"!!!!!!!!! Invalid Input !!!!!!!!!"<<"\n";
                        abort();
                    break;
                }

        case 6:    //Sphere
                int ino6;
                cout<<"Enter 1 To find Total Surface Area of Sphere"<<"\n";
                cout<<"Enter 2 To find Volume of Sphere"<<"\n";
                
                cin>>ino6;

                switch (ino6)
                {
                    case 1:
                    SphereArea();//Calling Function SphereArea();
                    abort();        
                    break;

                
                    case 2:
                        SphereVolume();//Calling Function SpehereVolume  
                        abort();

                    break;
                        cout<<"!!!!!!!!! Invalid Input !!!!!!!!!"<<"\n";
                        abort();
                    default:

                    break;

                }

        case 7: //Cylinder
                int ino7;
                cout<<"Enter 1 To find Area of Cylinder"<<"\n";
                cout<<"Enter 2 To find Volume  of Cylinder"<<"\n";
                
                cin>>ino7;

                switch (ino7)
                {
                    case 1:
                            CylinderArea();//Calling Function CylinderArea()
                            abort();
                    break;

                    
                    case 2:
                        CylinderVolume();//Calling Function CylinderVolume()
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

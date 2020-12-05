/* name : mohammed kabashi hammad
 class : second
 deparment : computer e
 */
#include <iostream>
#include <string>

using namespace std;

class Shape  // الكلاس الاب
{
 protected :

    int width , height , radius; // هنا لادخال البيانات وانواعها 
    float pi = 3.14 ;
 public :

 void set_Width()  //داله ادخال العرض
 {  
    cout << "Width = ";
    cin >> width;
 }

 void set_Height() //داله ادخال الارتفاع
 {
    cout <<"Height = ";
    cin >> height;
 }
 void set_Radius() //لادخال نق
 {
    cout << "Radius = ";
    cin >> radius;
 }

 virtual int area(void)=0; 

 void printArea(void) //هناتعوض فيها دوال ايجاد المساحة للكلاسات الوارثة ومن ثم تقوم بطباعته
 {
    cout<< this -> area() << endl;
 }

 virtual int circumference(void) = 0; 

 void printCircumference(void)
 {
    cout << this->circumference() << endl;
 }

};

class Polygon : public Shape // هنا يتم تعريف الكلاس بوليقون ويرث من  الكلاس الاب shape      
{
 public:
     int area() 
     {
         cout << "\nThe Polygon's Area = ";
         return (radius * height * width);
    }
    int circumference() // لايجاد محيط المضلع
    {
        cout << "The Polygon's Circumference = ";
        return(width*height);
    }
};

class Triangle : public Polygon // هنا نقوم بتعريف الكلاس تراينقل ويتم الوراثه من بوليقون 
{
    int area() //لايجاد مساحه المثلث
    {
        cout << "\nThe Triangle's Area = ";
        return (width * height / 2);
    }
    int circumference()  //لايجاد محيط المثلث
    {
        cout << "The Triangle's Circumference = ";
        return (width + height*2);
    }
};

class Rectangle : public Polygon // هنا نقوم بتعريف الكلاس رتانقل ويتم فيه الوراثه من بوليقون   
{
    int area() //لايجاد مساحه المستطيل
    {
        cout << "\nThe Rectangle's Area = ";
        return (width * height);
    }
    int circumference()  //لايجاد محيط المستطيل
    {
        cout << "The Rectangle's Circumference = ";
        return (2*(height*width));
    }
};

class Square : public Polygon // هنا نقوم بتعريف الكلاس سكوير ويتم فبه الوراثه من بوليقون
{
    int area()  //لايجاد مساحه المربع 
    {
        cout << "\nThe Square's Area = ";
        return (height * height);
    }
    int circumference()  //لايجاد محيط المربع
    { 
        cout << "The Square's Circumference = ";
        return (4*height);
    }
};
class Ellipse : public Shape //هما يرث الكلاس البيس من الكلاس الاب شيب
{
 public:
     int area()  //  هنا الداله لايجاد مساحه الشكل البيضاوي
     {
         cout << "\nThe Ellipse's Area = ";
         return (pi * width * height);
    }
    int circumference()  // لايجاد محيط الشكل البيضاوي
    {
        cout << "The Ellipse's Circumference = ";
        return (pi*(radius*radius));
    }
};
class Circle : public Ellipse // الكلاس سيركل يرث من الكلاس اليبس
{
 public:
    int area() //لايجاد مساحه الدائره
    {
        cout << "\nThe Circle's Area = ";
        return (pi/4*(radius*radius)); 
    }
    int circumference() //لايجاد محيط الدائره
    {

        cout << "The Circle's Circumference = ";
        return (pi * radius);
    }
};
int main() 
{
    Polygon polygon ; Triangle triangle ; Rectangle rectangle ; Square square ; Ellipse ellipse ; Circle circle; //objects
    Shape   *pointer1 = &polygon;  
    Shape *pointer2 = &ellipse;     
    Polygon *pointer3 = &triangle;  
    Polygon *pointer4 = &rectangle; 
    Polygon *pointer5 = &square;    
    Ellipse *pointer6 = &circle;    

    cout << "\nEnter The Value of Polygon's Width , Height and Radius:\n";
    pointer1->set_Width();
    pointer1->set_Height();
    pointer1->set_Radius();
    pointer1->printArea();
    pointer1->printCircumference();
    cout << "\nEnter The Value of Ellipse's Width , Height and Radius:\n"; 
    pointer2->set_Width();
    pointer2->set_Height();
    pointer2->set_Radius();
    pointer2->printArea();
    pointer2->printCircumference();
    cout << "\nEnter The Value of Triangle's Width and Height:\n";
    pointer3->set_Width();
    pointer3->set_Height();
    pointer3->printArea();
    pointer3->printCircumference();

    cout << "\nEnter The Value of Rectangle's Width and Height:\n"; 
    pointer4->set_Width();
    pointer4->set_Height();
    pointer4->printArea();
    pointer4->printCircumference();

    cout << "\nEnter The Value of Square's Height:\n"; 
    pointer5->set_Height();
    pointer5->printArea();
    pointer5->printCircumference();
    cout << "\nEnter The Value of Circle's Radius:\n";
    pointer6->set_Radius();
    pointer6->printArea();
    pointer6->printCircumference();
    cout << "\n the finall result is ....\n";
    cout << "polygon :";  
    pointer1->printArea();
    pointer1->printCircumference();
    cout << "\n ellipse :";
    pointer2->printArea();
    pointer2->printCircumference();
    cout << "\ntriangle :";
    pointer3->printArea();
    pointer3->printCircumference();
    cout << "\nrectangle :";
    pointer4->printArea();
    pointer4->printCircumference();
    cout << "\nsquare :";
    pointer5->printArea();
    pointer5->printCircumference();
    cout << "\ncircle:";
    pointer6->printArea();
    pointer6->printCircumference();
}

#include<iostream>
 using namespace std;
  class Rectangle
{	private:
float length,breadth; public:
Rectangle()
{		length=7.5; breadth=6.5;
}	Rectangle(float l, float b)
{
length=l; breadth=b;
}
Rectangle(float x)
{
length=x; breadth=x;
}void area()
{
cout<<"area of rectangle="<<length*breadth<<endl;
}
};  int main()
{	Rectangle r1;
Rectangle r2(10.5f,7.5f); Rectangle r3(5.5f);
r1.area();
r2.area();
r3.area(); return 0;
}


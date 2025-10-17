#include<iostream>
using namespace std;
template <class T1, class T2> // template class with two different data types
class Sample
{
	private:
		T1 x; // first variable of type T1
		T2 y; // second variable of type T2
	public:
		void get() 
		{
			cin >> x >> y;
		}
		void show() 
		{
			cout << "x= " << x << endl;
			cout << "y= " << y << endl;
		}
};
int main()
{
	Sample<int, float> s1; 
	cout << "Enter int , float value:"; 
	s1.get(); 
	s1.show(); 
	
	Sample<char, int> s2; 
	cout << "Enter char , int value:"; 
	s2.get(); 
	s2.show(); 
	Sample<float, char> s3; 
	cout << "Enter float, char value:"; 
	s3.get(); 
	s3.show(); 
	return 0; 
}


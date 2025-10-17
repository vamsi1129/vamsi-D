#include<iostream>
using namespace std;
template <typename T> // template declaration types
T big(T a, T b) // template function 
{
	return (a > b ? a : b); 
}
int main()
{
	cout << big(2, 3) << endl; 
	cout << big(2.5, 3.5); 
	return 0; 
}


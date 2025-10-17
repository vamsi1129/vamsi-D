#include <iostream>
using namespace std;
class complex
{
          private:
		int real, imag; // data members
	public:
	  void data()
	 {
		cout << "Enter real and imag values: ";
		cin >> real >> imag; // take input
	 }
	void operator + (complex c2)
	{
	 cout << "\nBinary operator + overloading using member function\n";
	 cout << "Result: " << real + c2.real << "+" << imag + c2.imag << "i"; 
	}
};

int main()
{
	complex c1, c2;
	c1.data();
            c2.data();
	c1 + c2; // overloaded + is called
	return 0;
}


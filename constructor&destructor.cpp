#include <iostream>
using namespace std;
class Student {
private:
string name; int rollNo; public:
Student(string n, int r) { name = n;
rollNo = r;
cout << "Constructor called: Object created for " << name << endl;
}
void show() {
cout << "Name: " << name << ", Roll No: " << rollNo << endl;
}
~Student() {
cout << "Destructor called: Object destroyed for " << name << endl;
}
};
int main() {
Student s1("pandu", 101); s1.show();
{
Student s2("vamsi", 102);
}
return 0;
}


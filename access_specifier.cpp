#include <iostream> 
using namespace std;
void display(string name = "Guest", int age = 18) {
cout << "Name: " << name << ", Age: " << age << endl;
}
int main() { display("pandu", 20); display("pooji"); display();
return 0;
}


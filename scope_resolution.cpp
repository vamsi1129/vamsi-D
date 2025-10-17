#include <iostream>
using namespace std;
int num = 100;
namespace First { int value = 10;
}
namespace Second { int value = 20;
}
int main() { int num = 50;
cout << "Local num = " << num << endl; cout << "Global num = " << ::num << endl;
cout << "First namespace value = " << First::value << endl;
cout << "Second namespace value = " << Second::value << endl; return 0;
}


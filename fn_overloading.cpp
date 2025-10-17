#include <iostream>
 using namespace std;
inline int square(int x)
 { return x * x;
}
int add(int a, int b) { return a + b;
}
int add(int a, int b, int c) { return a + b + c;
}
double add(double a, double b) { return a + b;
}
int main() {
cout << "Square of 5 = " << square(5) << endl;
cout << "Sum of 10 and 20 = " << add(10, 20) << endl; cout << "Sum of 1, 2 and 3 = " << add(1, 2, 3) << endl; cout << "Sum of 2.5 and 3.5 = " << add(2.5, 3.5) << endl; return 0;
}


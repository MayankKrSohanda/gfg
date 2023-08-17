#include <iostream>
using namespace std;

void task1(string a)
{
    char *p;
    p = &a[0];
    cout << *p << " " << &p << " " << a[3] << endl;             //Prints the first letter, pointer position and letter 't'
    p += 2;                                                     //Updates pointer by +2
    cout << *p << " " << *(&a[4]) << " " << *(&a[7]);           //Prints the updated pointer, letter 'r' and letter 'g'
}

int main()
{
    string a = "A string";
    task1(a);
    return 0;
}
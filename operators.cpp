#include <iostream>
using namespace std;

int main()
{
    system("clear");
    //YT: CodeBeauty
    // +, -, *, /, %

    cout << 5 + 2 << endl;
    cout << 5 - 2 << endl;
    cout << 5 * 2 << endl;
    cout << 5 / 2 << endl;
    cout << 5 / 2.0 << endl;
    cout << 5 % 2 << endl;

    //++,--
    int counter = 7;
    counter++;
    cout << counter << endl;

    counter--;
    counter--;
    cout << counter << endl;

    int counter2 = 7;
    //post incrementing
    cout << counter2++ << endl;

    //pre incrementing
    cout << ++counter2 << endl;

    // <, >, <=, >=, ==, !
}
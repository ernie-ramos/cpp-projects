#include <iostream>
using namespace std;

int main()
{
    //Youtube: CodeBeauty
    //User enters side lengths of a triangle (a,b,c)
    //Program should write out whether that traingle is
    //equilateral, isoseles, or scalene
    float a, b, c;
    cout << "a, b, c:";
    cin >> a >> b >> c;

    if (a == b && b == c)
        cout << "Equilateral triangle";
    else if (a != b && a != c && b != c)
        cout << "Scalene triangle";
    else
        cout << "Isocelese triangle";

    system("pause>0");
}
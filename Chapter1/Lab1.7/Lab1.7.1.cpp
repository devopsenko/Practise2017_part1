#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{    
    float value1, value2, value3, value4, value5;
    cout << "Введите пять чисел\n";
    cin >> value1;
    cin >> value2;
    cin >> value3;
    cin >> value4;
    cin >> value5;

    cout << value1 << endl;
    cout << fixed << setprecision(2) << value2 << endl;
    cout << fixed << setprecision(6) << value3 << endl;
    cout << fixed << setprecision(2) << value4 << endl;
    cout << fixed << setprecision(0) << value5 << endl;
    return 0;
}


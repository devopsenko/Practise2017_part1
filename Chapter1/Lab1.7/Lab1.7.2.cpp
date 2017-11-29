#include <iostream>
#include <math.h>
using namespace std;
 
int main(void)
{    
    float a, b, e = 0.000001;
    cout << "Введите 2 чисkf\n";
    cin >> a;
    cin >> b;
   
    if (fabs(1/a - 1/b) <= e) 
    cout << "Results are equal (by 0.000001 epsilon)" << endl;
    else cout << "Results are not equal (by 0.000001 epsilon)" << endl;

    return 0;
}
 
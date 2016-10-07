/*////////////////////
 Турунцева Анастасия//
 ИУ8-14///////////////
 *////////////////////
/* Решение показательного уравнения
 */

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double x, m;
    cout <<"x = "<< endl;
    cin >> x;
         {
        pow(3, 2x) + 4 * pow(3, x) - 5 = 0;
    }
    if (pow(3, x) == m )
         {
        pow(m, 2) + 4 * m - 5 = 0;
    }
    double D, m1, m2;
    D = 4*4 - 4*1*(-5);
    cout << "Дискриминант равен\n" << D << endl;
    if (D>0)
    {
        m1 = ( -4 + sqrt(D))/(2*1);
        m2 = ( -4 - sqrt(D))/(2*1);
        cout << "Первый корень равен\n" << m1 << endl;
        cout << "\n";
        cout << "Второй корень равен\n" << m2 << endl;
    }
    if ((m1>0)&(m2<0))
    {
        pow(3, x) = m1;
        pow(3, x) = m2;// корней нет
        x = log3(x);
        
    }

    return 0;
}

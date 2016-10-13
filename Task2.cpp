#include <iostream>
#include <math.h>


int main() {
    double pi;
    int f; 
    float a, h, r, d1, d2, S; 
    cout <<"Определение типа фигуры\n";
    cout <<"1 - параллелограмм, 2 - сфера, 3 - ромб";
    cin >> f;
    if ((f<1)&(f>3))
        cout << "Программная ошибка\n";
    else {
        switch (f) {
            case 1 :
                cout << "Введите длину стороны параллелограмма";
                cin >> a;
                cout << "Введите значение высоты параллелограмма";
                cin >> h;
                S = a * h;
                break;
            case 2 :
                cout << "Введите радиус сферы";
                cin >> r;
                S = 4 * pi * pow(r, 2);
                break;
            case 3 :
                cout << "Введите длину первой диагонали ромба";
                cin >> d1;
                cout << "Введите длину второй диагонали ромба";
                cin >> d2;
                S = (d1 * d2) / 2;
                break;

        }

        cout << "Площадь заданной фигуры равна" << S;
    }
    
    return 0;
}

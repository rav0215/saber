#include <iostream>
#include <math.h>


int main() {
    double pi;
    int f; 
    float a, h, r, d1, d2, S; 
    cout <<"the definition of figure type";
    cout <<"1 - parallelogram, 2 - sphere, 3 - rhomb";
    cin >> f;
    if ((f<1)&(f>3))
        cout << "programming error";
    else {
        switch (f) {
            case 1 :
                cout << "enter the value of the side of parallelogram";
                cin >> a;
                cout << "enter the height value of parallelogram";
                cin >> h;
                S = a * h;
                break;
            case 2 :
                cout << "enter the radius of the sphere";
                cin >> r;
                S = 4 * pi * pow(r, 2);
                break;
            case 3 :
                cout << "enter the value of the first diagonal of rhomb";
                cin >> d1;
                cout << "enter the value of the second diagonal of rhomb";
                cin >> d2;
                S = (d1 * d2) / 2;
                break;

        }

        cout << "the square preset shape equal" << S;
    }
    
    return 0;
}

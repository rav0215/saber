#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int a, b, c, null;
    float D, x;
    null = 0;
    cout << "Enter a, b, c";
         cin >>a >>b >>c;
    cout <<"\n";
 D = pow(b,2) - 4*a*c;
    cout << "D=" << D << endl;
    double D1 = sqrt(D);
    if(D<0) {
        cout << "D<0" "No roots";
    }
    if(D==null){
        x = ( - b + D1)/(2*a);
        x = ( - b - D1)/(2*a);
    }
    return 0;
}
 

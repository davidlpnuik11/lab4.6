#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double P, S;
    int i, k;
    P = 0;
    i = 1;
    while (i <= 10)
    {
        S = 0;
        k = i;
        while (k <= 20) {
            S += ((sqrt(abs(1 - k / i))) / (2 *  i + k * k));
            k++;
        }
        P += S;
        i++;

    }
    cout << P << "  1" << endl;


    P = 0;
    i = 1;
    do {
        S = 0;
        k = i;
        do {
            S += ((sqrt(abs(1 - k / i))) / (2 * i * i + k * k));
            k++;
        } while (k <= 20);

        P += S;
        i++;
    } while (i <= 18);

    cout << P << "  2" << endl;


    P = 0;
    for (i = 1; i <= 18; i++) {
        S = 0;
        for (k = i; k <= 20; k++) {
            S += ((sqrt(abs(1 - k / i))) / (2 * i * i + k * k));
        }
        P += S;


    }
    cout << P << "  3" << endl;

    P = 0;
    for (i = 18; i >= 1; i--) {
        S = 0;
        for (k = 20; k >= i; k--) {
            S += ((sqrt(abs(1 - k / i))) / (2 * i * i + k * k));

        }
        P += S;
    }
    cout << P << "  4" << endl;

    return 0;
}
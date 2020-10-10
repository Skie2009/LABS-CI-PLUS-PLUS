#include <iostream>
#include <conio.h>
#include <time.h>
#include <ctime>
#include <iomanip>
using namespace std;

int main()

{
    void processMass();
    {
        float sinMass[15]{};
        const double j = 0;
        const double i = 0;
        //float n = 0;
        for (int i = 0; i < 15; i++) {
            sinMass[i] = sin (i-j)+cos(i+j);
            //n++;
        }

        for (int i = 0; i < 15; i += 3) {
            cout << sinMass[i + 1] << "              ";
            cout << sinMass[i + 2] << "              ";
            cout << sinMass[i + 3] << "              " << endl;
        }

    }
    return 0;
}
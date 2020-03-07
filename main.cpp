// |=============================================================|
// | Title:         main                                         |
// | Author:        Drake G. Cummings                            |
// | Description:   A C++ program made for testing code duration |
// |=============================================================|
#include <iostream>
#include "Timer.h"

using namespace std;

int main(void) {

    DrakeOnline::Timer timer;

    timer.Start();

    // Operation to run the clock
    for (int i = 0; i<1000; i++) {
        static int number = 0;
        number++;
        cout << number << endl;
        if (number == 999) {
            system("CLS");
        }
    }

    timer.Stop();
    cout << "Timer time:\t\t" << timer.GetTime() << endl;

    timer.Reset();
    cout << "Timer after reset:\t\t" << timer.GetTime() << endl;

    return 0;
}

#ifndef UNTITLED7_CALCULOFPV_H
#define UNTITLED7_CALCULOFPV_H
#include <iostream>
#include<iostream>
#include<cmath>
#include<math.h>
void CalculOfPV(){
    double r;
    double PMT;
    double PV;
    double n;

    cout << "The computation of the present value " << endl;

    cout <<"Please provide r, the interest rate " << endl;

    cin >> r;

    while (r<0)  {
        cout << " the interest rate r cannot be negative. please provide another one: " << endl;
        cin >> r;
    }

    cout <<"Please provide PMT, the instalment " << endl;
    cin >> PMT;

    cout << "Please provide n, the number of periods " << endl;
    cin>> n;

    while( n<0 )

    {cout <<"the number of periods cannot be negative. please provide another one " << endl;
        cin >> n;
    }

    PV=PMT/(r*(1+(1/(pow((1+r),n)-1))));
    cout << PV;

}
#endif //UNTITLED7_CALCULOFPV_H

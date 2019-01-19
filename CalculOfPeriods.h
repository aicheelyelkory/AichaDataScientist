
#ifndef UNTITLED7_CALCULOFPERIODS_H
#define UNTITLED7_CALCULOFPERIODS_H
#include <iostream>
#include<iostream>
#include<cmath>
#include<math.h>
using namespace std;

void CalculOfPeriods() {

    double r;
    double PMT;
    double PV;
    int n;

    cout << "The calcul of the number of periods " << endl;
    cout << "Please enter the value of r, the interest rate " << endl;
    cin >> r;

    while (r<0)  {
        cout << " the interest rate r cannot be negative. please provide another one: " << endl;
        cin >> r;
    }

    cout << "Please provide the value of PV, the present value " << endl;
    cin >> PV;

    while (PV<=0)  {
        cout << " the pv cannot be negative OR null, please provide another one: " << endl;
        cin >> PV;
    }
    cout << "r*PV=" << r*PV << endl;


    cout << "Please provide the value of PMT, the instalment " << endl;
    cin >> PMT;

    while (PMT <= (r*PV)) {
        cout << " please provide a PMT greater than r*PV : " << endl;
        cin >> PMT;
    }

        cout << "n:" << log (PMT/(PMT-r*PV))/log(1+r) << endl;
    }




#endif //UNTITLED7_CALCULOFPERIODS_H



#ifndef UNTITLED7_CALCULOFPMT_H
#define UNTITLED7_CALCULOFPMT_H



#include <iostream>
#include<iostream>
#include<cmath>
#include<math.h>
using namespace std;


void CalculOfPMT(){
    double r;
    double PMT;
    double PV;
    double n;

    cout << "the Calcul of PMT " << endl;

    cout <<"Please provide r, the interest rate " << endl;
    cin >> r;

    while (r<0)  {
        cout << " the interest rate r cannot be negative. please provide another one: " << endl;
        cin >> r;
    }

    cout <<"Please provide n, the number of periods " << endl;
    cin >> n;

    while( n<0 )
    {cout <<"the number of periods cannot be negative. please provide another one " << endl;
        cin >> n;
    }

    cout << "Please provide the value of PV, the present value " << endl;
    cin>> PV;

    PMT=PV*r*(1+(1/(pow((1+r),n)-1)));
    cout << PMT;

}



#endif //UNTITLED7_CALCULOFPMT_H

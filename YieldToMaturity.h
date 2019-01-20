
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <time.h>

using namespace std;

double f(double PMT, double PV, int n, double r) {
    double temp;
    temp = PV - PMT/(r*(1+(1/pow(1+r, n)-1)));
    return temp;
}


double YieldToMaturity(){

    double PMT,PV,r, k,rNext, temp;
    int n;

    //PROVIDING VALUES
    //double PV, PMT;
    //int n;

    cout << "Please provide:" << endl;
    cout << "The Present Value:"; cin >> PV;
    cout << "PMT:"; cin >> PMT;
    cout << "The number of periods"; cin >> n ;
    //PV = PresentValue;

    cout << "PMT: " << PMT << endl;
    cout << "n: " << n << endl;

    // starting points
    r = approximateYTM(PMT,PV,n);
    rNext = 0.95*r;

    while (abs(f(PMT,PV,n,rNext))> 0.001){
        temp = rNext;
        rNext = rNext - (f(PMT,PV,n,rNext)*(rNext - r))/(f(PMT,PV,n,rNext)-f(PMT,PV,n,r));
        r = temp;

    }

    cout << "objective function: " << f(PMT,PV,n,rNext) << endl;
    cout << "YTM : " << (rNext * k)*100 << "% ." << endl;
}

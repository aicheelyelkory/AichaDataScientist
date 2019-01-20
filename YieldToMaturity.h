
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <time.h>

using namespace std;

double f(double PMT, double PV, int n, double r) {
    double temp;
    temp = PMT/(r*(1+(1/pow(1+r, n)-1))) - PV;
    return temp;
}


void YieldToMaturity(){
double PMT, PV, n;
double r0, r1, r2, eps;
cout
<< " We want to find an approximate r related to the formula that we have and an error of approximation"
<< "\n";
cout << "Provide epsilon, the error" << endl;
cin >> eps;
while (eps <= 0) {
cout << "Provide a striclty positive" << endl;
cin >> eps;
}
cout << "Provide PMT the installment" << endl;
cin >> PMT;
cout << "Provide PV the present value" << endl;
cin >> PV;
cout << "Provide the number of period n" << endl;
cin >> n;
while (n < 0) {
cout << "Provide a non negative number" << endl;
cin >> n;
}
cout << "Provide an initial r0 and r1 such that both have to be between 0 and 1 and the sum equal or below to 1"
<< "\n";
cout << "Provide r0" << endl;
cin >> r0;
cout << "Provide r1" << endl;
cin >> r1;
while ((r1 + r0 > 1) or (r1 > 1) or (r0 > 1) or (r1 <= 0) or (r0 <= 0)) {
cout << "Provide a feasible couple (r0,r1) " << "\n";
cout << "Provide r0" << endl;
cin >> r0;
cout << "Provide r1" << endl;
cin >> r1;
}
while (abs(r0 - r1) > eps) {
r2 = r1 - (f(r0,PMT,PV,n)*(r1 - r0)/(f(r0,PMT,PV,n)-f(r1,PMT,PV,n)));
r0 = r1;
r1 = r2;
}
cout << "r is equal to " << r2 << " with respect to this approximation error : " << eps << endl;
}

#include <iostream>
#include <cmath>
using namespace std;

double h(double x); 

int main()
{
    double qn, qk;
    int n;

    
    cout << " qn: "; cin >> qn;
    cout << " qk: "; cin >> qk;
    cout << " n: "; cin >> n;

    double dq = (qk - qn) / n; 
    double q = qn;

    
    cout << " q \t h(q)\n";
    cout << "----------------\n";

    
    while (q <= qk)
    {
        double result = h(q); 
        cout << q << "\t" << result << endl; 
        q += dq;
    }

    return 0;
}

double h(double x)
{
    if (abs(x) >= 1)
    {
        
        return (cos(x + 1) / cos(x + 1));
    }
    else
    {
        
        double sum = 0;
        for (int i = 0; i <= 6; ++i) 
        {
            sum += pow(x, 2 * i) / ((2 * i + 1) * 2);
        }
        return 1 / cos(x) * sum;
    }
}
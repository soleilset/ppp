// Description: Basic operators with integers
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    cout << "Escriba dos numeros naturales luego 'enter':\n";
    int n = 0, m = 0;
    cin >> n >> m;
    cout << "n == " << n
    << "\nn+1 == " << n+1
    << "\nthree times n == " << 3*n
    << "\ntwice n == " << n+n
    << "\nn squared == " << n*n
    << "\nhalf of n == " << n/2
    << "\nsquare root of n == " << sqrt(n)
    << "\nmodulo n == " << n%2
    << "\nn/m * m + n%m == " <<  n/m * m + n%m
    << '\n';
}
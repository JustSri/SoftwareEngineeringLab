#include<iostream>
#include<vector>
#include<string>

using namespace std;

float temperature_predictor(float a, float b, float c, float pr)
{
    float temp = a * pr * pr + b * pr + c;
    return temp;
}

int main()
{
    float a, b, c, pr;
    cout << "Please enter the value for a:\n" ;
    cin >> a;
    cout << "Please enter the value for b:\n" ;
    cin >> b;
    cout << "Please enter the value for c:\n" ;
    cin >> c;
    cout << "Please enter the value for pressure:\n" ;
    cin >> pr;
    cout << "When the coefficient a is: " << a << " , when the coefficient b is: " << b << " , when the coefficient c is: " << c << " and when the atmospheric pressure is: " << pr << " , then the value of the temperature is: " << temperature_predictor(a,b,c,pr) << "\n";
    return 0;
}
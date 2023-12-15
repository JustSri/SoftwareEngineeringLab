#include<iostream>
#include<vector>
#include<string>

using namespace std;

float temperature_predictor(float pr)
{
    float a = .0076;
    float b = .001;
    float c = 30.00;
    float temp = a * pr * pr + b * pr + c;
    return temp;
}

int main()
{
    float pr = 30;
    cout << "The values of the coefficient a, b and c respectively are: 0.076, 0.001 and 30.00\n";
    cout << "This is the value of pressure and the resulting atmospheric temperature resulting from it: " << pr << ": " << temperature_predictor(pr) << "\n";
    return 0;
}
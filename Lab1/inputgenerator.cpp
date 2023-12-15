#include<iostream>
#include<string>
#include<vector>
#include<fstream>

using namespace std;

int main()
{
    ofstream inputfile1("inputfile2.txt");
    float a,b,c,pr;
    for(int i = 0; i < 5; i++)
    {
        cin >> a >> b >> c >> pr;
        inputfile1 << a << " " << b << " " << c << " " << pr << "\n";
    }
    inputfile1.close();
    return 0;
}
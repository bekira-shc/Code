#include<iostream>
#include<string>
#include <algorithm>

using namespace std;

int main()
{
    string S1;
    cin>> S1;

    transform(S1.begin(), S1.end(), S1.begin(), ::toupper);
    cout<< S1 << endl;
}



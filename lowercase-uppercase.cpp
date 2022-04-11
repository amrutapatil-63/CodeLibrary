#include<bits/stdc++.h>
using namespace std;
  
int main()
{
    // su is the string which is converted to uppercase
    string su = "Jatin Goyal";
  
    // using transform() function and ::toupper in STL
    transform(su.begin(), su.end(), su.begin(), ::toupper);
    cout << su << endl;
    return 0;
}

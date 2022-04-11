#include <bits/stdc++.h>
using namespace std;
  
// Utility function to find gcd
int gcd(int a, int b)
{
    int c;
    while (a != 0)
    {
        c = a;
        a = b%a;
        b = c;
    }
    return b;
}
  
// Function to print the desired output
void forbenius(int X,int Y)
{
    // Solution doesn't exist 
    // if GCD is not 1
    if (gcd(X,Y) != 1)
    {
        cout << "NA\n";
        return;
    }
  
    // Else apply the formula
    int A = (X*Y)-(X+Y);
    int N = (X-1)*(Y-1)/2;
  
    cout << "Largest Amount = " << A << endl;
    cout << "Total Count = " << N << endl;
}
  
// Driver Code
int main()
{
    int X = 2,Y = 5;
    forbenius(X,Y);
  
    X = 5, Y = 10;
    cout << endl;
    forbenius(X,Y);
    return 0;
}

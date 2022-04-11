#include<bits/stdc++.h>
using namespace std;
  
int main()
{
    string su = "Jatin Goyal";

    transform(su.begin(), su.end(), su.begin(), ::toupper);
    cout << su << endl;
    return 0;
}

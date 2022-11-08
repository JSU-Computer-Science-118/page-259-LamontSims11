// Lamont Sims         J00968337
// Program #7          Page #259
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a;
    int b;
    int c;
    double root1;
    double root2;

    cout << "Enter the values for A, B, C" << endl;
    cin >> a >> b >> c;

   root1 = (-b + sqrt(pow(b,2)- 4 * a * c)) / (2 * a);
   root2 = (-b - sqrt(pow(b,2)- 4 * a * c)) / (2 * a);

   if(pow(b, 2) - 4 * a * c < 0)
     cout << " complex roots " << endl;
   if (pow(b, 2) - 4 * a * c > 0)
     cout << " two real roots " << endl;
   if (pow(b, 2) - 4 * a * c == 0)
     cout << " one real root " << endl;
    
 cout << " the 1st root is " << root1 << endl; 
 cout << " the 2nd root is " << root2 << endl; 
 return 0;
}

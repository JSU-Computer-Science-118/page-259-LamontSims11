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
    double singleroot;

    cin >> a >> b >> c;

   root1 = (-b + sqrt(pow(b,2)- 4 * a * c)) / (2 * a);
   root2 = (-b - sqrt(pow(b,2)- 4 * a * c)) / (2 * a);
   singleroot = root1;

   if(pow(b,2) - 4 * a * c < 0)
     cout << "Complex roots " << endl;
   if (pow(b,2) - 4 * a * c > 0)
     cout << "Two real roots " << " - First root " << root1 
     << " - Second root " << root2 << endl;
   if (pow(b,2) - 4 * a * c == 0)
     cout <<" The single root is "
     << singleroot << endl;

 return 0;
}

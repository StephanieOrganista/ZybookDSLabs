#include <iostream>
#include <vector>
using namespace std;

int main() {
   // get number of inputs
   int numVal;
   cin >> numVal;
   
   // initialize vector
   vector<int> aValue(numVal);
   
   // get vector values
   for (int i = 0; i < numVal; ++i) {
      cin >> aValue.at(i);
   }

   // get threshold value
   int thresh;
   cin >> thresh;
   
   //output all numbers that is below threshold value
   for (int i = 0; i < numVal; ++i) {
      if (aValue.at(i) < thresh) {
         cout << aValue.at(i) << " ";
      }
   }

   cout << endl;

   return 0;
}

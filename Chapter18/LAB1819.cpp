#include <iostream>
#include <vector>   // Must include vector library to use vectors
using namespace std;

int main() {
   vector<int> userVals;
   int middle;
   int tempVar;
   unsigned int i;
  
   while (cin >> tempVar) { //read in array
      if (tempVar == -1) break;
   userVals.push_back(tempVar);//add to the vector
   } 
   
   if (userVals.size() > 9) {
      cout  << "Too many inputs" << endl;    
   }
   
  else if (userVals.size() % 2 != 0) { //for a list with even numbers 
    middle = (userVals.size() / 2);
    cout << userVals[middle] << endl;
    }
   return 0;
}

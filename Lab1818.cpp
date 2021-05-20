/* 18.18 LAB: Output numbers in reverse
Write a program that reads a list of integers, and outputs those integers in reverse. The input begins with an integer indicating the number of integers that follow. For coding simplicity, follow each output integer by a space, including the last one.

Ex: If the input is:

5 2 4 6 8 10
the output is:

10 8 6 4 2
To achieve the above, first read the integers into a vector. Then output the vector in reverse.
*/ 

#include <iostream>
#include <vector>   // Must include vector library to use vectors
using namespace std;

int main() {
   // Ask for number of integers to be entered in the vector. 
   int numVals;
   cin >> numVals;
   
   vector<int> userInts(numVals); // A vector to hold the user's input integers
   
  //Loop to add integers in userInts
   for (int i = 0; i < userInts.size(); i++) {
      cin >> userInts.at(i);
   }
   
  //Loop to print out userInts in reverse
   for ( int i = userInts.size() - 1; i >= 0; --i) {
      cout << userInts.at(i) << " ";
   }
   cout << endl;
   return 0;
}


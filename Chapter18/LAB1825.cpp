/*
18.25 LAB: Two smallest numbers
Write a program that reads a list of integers, and outputs the two smallest integers in the list, in ascending order. The input begins with an integer indicating the number of integers that follow.

Ex: If the input is:

5 10 5 3 21 2
the output is:

2 3
You can assume that the list of integers will have at least 2 values.

To achieve the above, first read the integers into a vector.

Hint: Make sure to initialize the second smallest and smallest integers properly.

*/
#include <iostream>
#include <vector>
using namespace std;

int main() {

   //input number of integers
   int numValues;
   cin >> numValues;

   //declare vector and fill with values
   vector<int> smallList(numValues);
   
   for (int i = 0; i < numValues; ++i) {
      cin >> smallList.at(i);
   }
   
   //get smallest two variables with loop
   int x,y;
   x = smallList.at(0);
   y = smallList.at(1);
   
   // get smallest variable with x
   for (int i = 0; i < numValues; ++i) {
      if (x > smallList.at(i) ) {
         x = smallList.at(i);
      }
   }
   // get second smallest variable with y
   for (int i = 0; i < numValues; ++i) {
      if (y > smallList.at(i) && smallList.at(i) > x && y != x) {
         y = smallList.at(i);
      }
   }
   
   //print out x and y 
   cout << x << " " << y << endl;
   
   
   return 0;
}

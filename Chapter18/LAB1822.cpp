/* 
18.22 LAB: Word frequencies
Write a program that reads a list of words. Then, the program outputs those words and their frequencies. The input begins with an integer indicating the number of words that follow. Assume that the list will always contain less than 20 words.

Ex: If the input is:

5 hey hi Mark hi mark
the output is:

hey 1
hi 2
Mark 1
hi 2
mark 1
Hint: Use two vectors, one vector for the strings and one vector for the frequencies.
*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

   // number of inputs
   int numVals;
   cin >> numVals;
   
   // variables for string vector
   vector<string> wordList(numVals);
   //set variables for frequency vector
   vector<int> freq(numVals);
   
   //get inputs for string vector
   for (int i = 0; i < numVals; ++i) {
      cin >> wordList.at(i);
   }

   // get inputs for frequency vector
   for (int i = 0; i < numVals; ++i) {
      for (int j = 0; j < numVals; ++j) {
         if ( wordList.at(j) == wordList.at(i) ) {
             freq.at(i) = freq.at(i) + 1;
         }
      } 
   }
   
   //output both vectors
   for (int i = 0; i < numVals; ++i) {
      cout << wordList.at(i) << " " << freq.at(i) << endl;
   }
   
   return 0;
}

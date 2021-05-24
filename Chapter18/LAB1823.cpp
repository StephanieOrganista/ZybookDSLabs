/*
18.23 LAB: Contains the character
Write a program that reads an integer, a list of words, and a character. The integer signifies how many words are in the list. The output of the program is every word in the list that contains the character at least once. Assume at least one word in the list will contain the given character.

Ex: If the input is:

4 hello zoo sleep drizzle z
then the output is:

zoo
drizzle
To achieve the above, first read the list into a vector. Keep in mind that the character 'a' is not equal to the character 'A'.
*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
   
   //read number of list inputs
   int numValues;
   cin >> numValues;
   
   //take in list values
   vector<string> list(numValues);
   
   for (int i = 0; i < numValues; ++i) {
      cin >> list[i];
   }
   
   //get character
   char x;
   cin >> x;
   
   string word;
   
   for (int i = 0; i < numValues; ++i) {
      word = list[i];
      if ( word.find(x) != string::npos) {
            cout << word << endl; 
         }
   }
   
   return 0;
}

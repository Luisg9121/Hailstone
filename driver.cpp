#include "hailstone.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

int main()
{
   int numb;

   cout << "Welcome to the hailstone sequence program" << endl
        << "The function of the program is to read a number n from the user" << endl
        << "and then tells the user four things:" << endl << endl
        << "   1.   The entire hailstone sequence starting at n, all on one line," << endl
        << "        with numbers separated by spaces;" << endl
        << "   2.   The length of the hailstone sequence that starts with n;" << endl
        << "   3.   The largest number in the hailstone sequence that starts with n;" << endl
        << "   4.   The smallest number in the hailstone sequence that starts with n;" << endl
        << "   5.   Count and display the numbers in that hailstone sequence are even." << endl
        << "   6.   Count and display the numbers in that hailstone sequence are odd." << endl << endl
        << endl <<  "Enter a Positive integer Number  ";

   cin >> numb;

   cout << endl  << endl;

   vector <int> v(0);

   findHail( v, numb);

   print(v);

   cout << "The length of the sequence is " << length(v) << "." << endl
        << "The largest number in the sequence is " << largest(v) << "." << endl
        << "The smallest number in the sequence is " << smallest(v) << "." << endl;

   evens(v);

   odds(v);

   return 0;
}


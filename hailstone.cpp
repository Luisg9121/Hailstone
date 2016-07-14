#include "hailstone.h"
#include <vector>
#include <iomanip>
#include <algorithm>

using namespace std;

void evens(const vector <int> v)
{
   int cnt = 0;
   vector <int> temp;

   for(int i = 0; i < v.size(); i++)
      {
      if(v[i] % 2 == 0)
        {
        temp.push_back(v[i]);
        cnt++;
        }
      }

   cout << setw(10) << left <<  cnt << "   of the numbers are even. The odd sequence : ";

    for(int i = 0; i < temp.size(); i++)
       {
       cout << temp[i] << " ";
       }
    cout << endl;
}


void odds(const vector <int> v)
{
   int cnt = 0;
   vector <int> temp;

   for(int i = 0; i < v.size(); i++)
      {
      if(v[i] % 2 == 1)
        {
        temp.push_back(v[i]);
        cnt++;
        }
      }

   cout << setw(10) << left << cnt << "   of the numbers are odd. The odd sequence : ";

    for(int i = 0; i < temp.size(); i++)
       {
       cout << temp[i] << " ";
       }
     cout << endl << endl;
}


int smallest(const vector <int> v)
{
   int temp;

   int smallest = v[0];

   for(int i = 1; i < v.size(); i++)
      {
      temp = v[i];
      if(temp < smallest)
        {
        smallest = temp;
        }
      }

   return smallest;
}



int largest(const vector <int> v)
{
   int temp;

   int largest = v[0];

   for(int i = 1; i < v.size(); i++)
      {
      temp = v[i];
      if(temp > largest)
        {
        largest = temp;
        }
      }

   return largest;
}


void print(const vector <int> x)
{
   cout << "The sequence of hailstone starting at " << x[0] << " is" << endl << endl;

   for(int i = 0; i < x.size(); i++)
      {
      cout << x[i] << " ";
      } 
   cout << endl << endl;
}

int length(const vector <int> v)
{
   return v.size();
}



void findHail(vector <int>& v, int numb)
{
   v.push_back(numb);
   while(numb != 1)
   {
   if(numb % 2 == 0)
     {
     numb /= 2;
     v.push_back(numb);
     }
    else if( numb % 2 == 1)
      {
     numb = ( 3 * numb ) + 1;
     v.push_back(numb);
      }
    }
}


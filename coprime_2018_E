#include <iostream>
using namespace std;


int gcd(int a, int b)
{ 
   if (b == 0) 
      return a; 
   return gcd(b, a % b);  
} 

int main() 
{
	int a = 1,
	    b = 500,
	    c = 1,
	    d = 500;
	
	int coprime = 0;
	
	for(int i=a; i <= b; i++)
	{
	   for(int j=c; j <= d; j++)
	   {
	      if ( gcd(i,j) == 1)
	        coprime +=1;
	   }
	}
	cout << coprime << endl;
	
    return 0;
}

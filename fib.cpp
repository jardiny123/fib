#include <iostream>
#include <cstring>
using namespace std;
#define MAX 1000

void add(char x[],char y[],char z[])  
{  
    int i,ylen,zlen,equal; 
    char c = 0,temp; 
    ylen = strlen(y); 
    zlen = strlen(z); 
    equal = (ylen == zlen) ? 1 : 0;  
    for(i=0;i<zlen;i++)  
    {  
	    x[i]=c + y[i] + z[i] - '0';  
            if( x[i]-'0' > 9) 
            { 
                  x[i]-=10; 
                  c=1; 
            } 
            else 
	          c=0;  
     } 
     if(equal) 
     { 
	     if(c!=0) 
             { 
                 x[i]=c + '0'; 
                 x[i+1]='\0'; 
             } 
      } 
      else 
      { 
             x[i]=c + y[i]; 
             x[i+1]='\0'; 
      }  
      return;  
} 
// time complexity : O(N)
// space complexity : O(N)
// dynamic programming is useful to remove duplicate calculations
// recommended solution
unsigned long long fib(int n) 
{ 
  // make dp array to store Fibonacci numbers
  unsigned long long dp[n+1]; 
  int i; 
  // set inital value
  dp[0] = 0; 
  dp[1] = 1; 

  // iterative method to find Fib. numbers  
  for (i = 2; i <= n; i++) 
  {
	  dp[i] = dp[i-1] + dp[i-2]; 
  } 
  return dp[n]; 
} 

// time complexity : O(2^N)
// space complexity : O(1)
// function call stack size : O(N)
// recursive method : short code but slow speed
unsigned long long fib2(int n)
{
	if(n <= 1)
		return n;
	else
		return fib2(n-1)+fib2(n-2);
}

void print(char x[])  
{  
    int i;  
    for(i=strlen(x)-1;i>=0;i--)  
    {  
	    cout << x[i];  
    } 
    cout << " ";  
    return;  
}  
int main () 
{ 
 	  char n_minus1[MAX]="1",n_minus2[MAX]="1",nth[MAX]=""; 	      
	  int n = 100; 
//	  int n = 50; 
	  if(n>93)
	  {	
		for(int i=2;i<n;i++)
		{
	  		add(nth,n_minus1,n_minus2);
	  		strcpy(n_minus2, n_minus1);
	  		strcpy(n_minus1,nth);
		}	
		print(nth);
			
	  }
	  else
	  	cout << fib(n) << " ";
	  return 0; 
} 

#include <conio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

#define SWAP(A, B) { int t = A; A = B; B = t; }
void bubblesort(int *a, int n)
{
  int i, j;
 
  for (i = n - 1; i > 0; i--)
  {
    for (j = 0; j < i; j++)
    {
      if (a[j] > a[j + 1])
        SWAP( a[j], a[j + 1] );
    }
  }
}

int main ()
{
	printf("Lab student group IU8-21 Fedchenko Danila\n\n\n");
	int n;
	cout <<"Enter the amount of numbers: ";
	cin >> n;	
	int *a;
	a=new int[n];
	for (int i=0;i<n;i++)
	{		
		a[i]=0;
	}
	cout <<"Enter "<<n<<" numbers: "; 
	for (int i=0;i<n;i++)
	{		
		cin >> a[i];
	}
	cout <<"Sorted list of 5 "<<n<<" numbers: "; 
	bubblesort(a,n);
	for (int i=0;i<n;i++)
	{		
		cout <<a[i]<<" ";
	}

	_getch();
	return 0;
}
#include <conio.h>
#include <stdlib.h>
#include <iostream>
#include <locale>
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
	setlocale(LC_ALL,"Russian");
	printf("������������ ������ �������� ������ ��8-21 �������� ������\n\n\n");
	int n;
	cout <<"������� ���������� �����: ";
	cin >> n;	
	int *a;
	a=new int[n];
	for (int i=0;i<n;i++)
	{		
		a[i]=0;
	}
	cout <<"������� "<<n<<" �����: "; 
	for (int i=0;i<n;i++)
	{		
		cin >> a[i];
	}
	cout <<"��������������� ������ �� "<<n<<" �����: "; 
	bubblesort(a,n);
	for (int i=0;i<n;i++)
	{		
		cout <<a[i]<<" ";
	}

	_getch();
	return 0;
}
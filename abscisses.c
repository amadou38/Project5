#include<stdio.h>
#include<stdlib.h>
#include<math.h>

 double *abscisses(double a, double b, int N)
{
 	double *TableauReel( int ig, int id);
double h, *T;
	int i;
	h=fabs(b-a)/N;
	T=TableauReel( 0, N);
	
		T[0]=a;
			for(i=1; i<=N; i++)
			T[i]=T[0]+i*h;
  return T; 
}


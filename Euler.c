#include<stdio.h>
#include<stdlib.h>

	void Euler(double *X, double *Y, int N, double alpha, double h, double (*f)(double x, double y))
	{
		int i;
		Y[0]=alpha;
		for(i=0; i<=N-1; i++)
		Y[i+1]=Y[i]+h*(*f)(X[i],Y[i]);

	}

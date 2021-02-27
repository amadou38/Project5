#include<stdio.h>
#include<stdlib.h>
#include<math.h>
	void Taylor2(double *X, double *Y, int N, double h, double alpha, double (*f)(double x, double y), double (*fx)(double x, double y), double (*fy)(double x, double y))
	{
		int i;
		Y[0]=alpha;
		for(i=0; i<=N-1; i++)
		Y[i+1]=Y[i]+h*((*f)(X[i], Y[i])+(h/2)*((*fx)(X[i],Y[i])+(*f)(X[i],Y[i])*(*fy)(X[i],Y[i])));
	}

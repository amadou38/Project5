#include<stdio.h>
#include<stdlib.h>
 
 void AfficherResul(double *X, double *Y, int N)
{
 int k;
	printf(" k\t\t\t X(k)\t\t\t Y(k):\n");
 for(k=0; k<=N; k++)
 	printf("%d\t\t\t %f\t\t\t %f\n", k, *(X+k), *(Y+k));
printf("\n"); 
 }


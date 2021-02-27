#include<stdio.h>
#include<stdlib.h>

	void methodes(double *X, double *Y, int choixm, int N, double alpha, double h, int choixf, double a, double b)
	{
		double f1(double x, double y); 
		double f2(double x, double y); 
		double f3(double x, double y); 
		double f4(double x, double y); 
		double f5(double x, double y); 
		double f6(double x, double y); 
		double f7(double x, double y); 
		double f8(double x, double y); 
		double f9(double x, double y); 
		double fx1(double x, double y); 
		double fx2(double x, double y); 
		double fx3(double x, double y); 
		double fx4(double x, double y); 
		double fx5(double x, double y); 
		double fx6(double x, double y); 
		double fx7(double x, double y); 
		double fx8(double x, double y); 
		double fx9(double x, double y); 
		double fy1(double x, double y); 
		double fy2(double x, double y); 
		double fy3(double x, double y); 
		double fy4(double x, double y); 
		double fy5(double x, double y); 
		double fy6(double x, double y); 
		double fy7(double x, double y); 
		double fy8(double x, double y); 
		double fy9(double x, double y); 
		double (*p[9])(double x, double y)={f1,f2,f3,f4,f5,f6,f7,f8,f9};
		double (*px[9])(double x, double y)={fx1,fx2,fx3,f4,fx5,fx6,fx7,fx8,fx9};
		double (*py[9])(double x, double y)={fy1,fy2,fy3,fy4,fy5,fy6,fy7,fy8,fy9};
		void Taylor2(double *X, double *Y, int N, double h, double alpha, double (*f)(double x, double y), double (*fx)(double x, double y), double (*fy)(double x, double y));
		void Euler(double *X, double *Y, int N, double alpha, double h, double (*f)(double x, double y));		
		//double *Y;
		
		// Y=ordonnees(X,N,choixf);
		int k;
	switch(choixm)
	{
		case 1: system("cls");
		printf("La solution approchée de l'équation différentielle par la méthode d'Euler est : \n");
		//AfficherTableauReel(X,0,N);
	//	for(k=N; k<=N; k++)
	//	{
			Euler(X,Y,N,alpha,h,p[choixf-1]);
			
	//	}
		
		
		break;
		case 5: system("cls");
		Taylor2(X,Y,N,h,alpha,p[choixf-1],px[choixf-1],py[choixf-1]);
		printf("La solution approchée de l'équation différentielle est :\n");
			
	}
	
	}

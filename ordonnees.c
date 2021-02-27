#include<stdio.h>
#include<stdlib.h>

double *ordonnees(double *X , int N, int choixf)
{
   double *TableauReel( int ig, int id);
	double T[10000], *Y;
	double f1(double x, double y); 
		double f2(double x, double y(double x)); 
		double f3(double x, double y(double x)); 
		double f4(double x, double y(double x)); 
		double f5(double x, double y); 
		double f6(double x, double y(double x)); 
		double f7(double x, double y(double x)); 
		double f8(double x, double y(double x)); 
		double f9(double x, double y(double x)); 
	Y=TableauReel(0,N);     
		switch(choixf)
	{
		case 1:
			RemplirTableauAvecFonction(X,Y,0,N,&f1);

			break;
		case 2: 
			RemplirTableauAvecFonction(X,Y,0,N,&f2);

			break;
		case 3:
			RemplirTableauAvecFonction(X,Y,0,N,&f3);

			break;
		case 4: 
			RemplirTableauAvecFonction(X,Y,0,N,&f4);

			break;
		case 5:
			RemplirTableauAvecFonction(X,Y,0,N,&f5);

			break;
		case 6:
			RemplirTableauAvecFonction(X,Y,0,N,&f6);

			break;
		case 7:
			RemplirTableauAvecFonction(X,Y,0,N,&f7);

			break;
		case 8:
			RemplirTableauAvecFonction(X,Y,0,N,&f8);

			break;
		case 9:
			RemplirTableauAvecFonction(X,Y,0,N,&f9);

			break;
		default: printf("Choix erronne!!!\n");
	}
     
		
		//AfficherTableauReel(Y,1,N);
return Y;
}


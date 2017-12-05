#include <stdlib.h> //random function
#include <stdio.h>
#include <time.h>

#define X 5 //batas x
#define Y 5 //batas y
#define desimal 100 //resolution behind coma
#define dots 5000000 //resolution

int main (void){

int f1, persegi=0, count=0;
float luas = 0,  xc, yc, yf; //c=coba f=persamaan
//yf = 2 + 0.5*x - 0.25*x*x

for(f1=0; f1<dots; f1++){
	xc=rand()*time(NULL)%(batasx*desimal);
	xc=xc/desimal;
	yc=rand()*time(NULL)%(batasy*desimal);
	yc=yc/desimal;
	//printf("%f\t%f\n", xc, yc); //debuging purpose
	yf = 2 + (0.5*xc) - (0.25*xc*xc);
	//printf("%f\n", yf); //debuging purpose
	if(yf >= yc){
		count++;
	}
}
printf("MONTE CARLO\n\n");
printf("total titik = %i\n", (int)dots);
printf("count = %i\n", count);
float penuh = (float)count/(float)dots;
printf("penuh = %f\n", penuh);
persegi = (int)batasx * (int)batasy;
printf("persegi = %i\n", persegi);
luas = penuh*(float)persegi;
printf("luas = %f\n", luas);

return 0;
}


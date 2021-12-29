// Program ce izracunat volumen kugle.

#include<stdio.h>
#include <stdlib.h>
#define PI 3.14

//Funkcija za izracunavanje volumena kugle.
float volumen(int radijus){
	
	float vol;
	vol=(4.0/3.0)*PI*radijus* radijus*radijus;
	return vol;
}

int main(){
   float vol;
   int radijus;
   printf("Unesi radijus kugle:\n");
   scanf("%d",&radijus);
   float V=volumen(radijus);
   printf("Volumen kugle je %f\n",V);
   return 0;
}

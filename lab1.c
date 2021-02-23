
#include <stdio.h>//pidklucenna bibliotek
#include<math.h>
int main() {
    float x1, x2, x3, y1, y2, y3, p, s; //ogoloshyemo zminni
    
    printf("Vedenia kordinati pershoi tocki:\n"); //Vedennia chisel
    printf("Vvedit x1: ");
    scanf("%f", &x1); //Vedenia danih
    
    printf("Vvedit y1: ");
    scanf("%f", &y1);

    printf ("\n Vedenia kordinati drugoi tocki:\n");
    printf("Vvedit x2: ");
    scanf("%f", &x2);
    
    printf("Vvedit y2: ");
    scanf("%f", &y2);
    
    printf("\nVedenia kordinati tretioi tocki: \n");
    printf("Vvedit x3: ");
    scanf("%f", &x3);
    
    printf("Vvedit y3: ");
    scanf("%f", &y3);
    
    float ab = sqrt (pow (x2 - x1, 2) + pow(y2 - y1, 2));
    float bc = sqrt (pow (x3 - x1, 2) + pow(y3 - y2, 2));
    float ac = sqrt (pow (x3 - x1, 2) + pow(y3 - y1, 2));
    p = ab + ac + bc;
    float pp = p / 2;
    s = sqrt (pp * (pp - ac) * (pp - bc) * (pp - ab));
    
    printf("\n***Rezultat***\n");
    
    printf("\n Storona AB = %2.f\n", ab );
    printf("Storona AC = %2.f\n", ac );
    printf("Storona BC = %2.f\n", bc );
    
    printf("\n Ploscha S = %2.f \n", s);
    printf("Perimetr P = %2.f", p);
    
    return 0;
  }

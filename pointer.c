#include <stdio.h>

int main(){

double d[3] = {0.2, 0.4, 0.6};
double *p1 =NULL, *p2=NULL;
p1 =d;
p2 =d;

for(int i=0; i<3; i++){
  printf("%f %f %f", *(d + i),p1[i],*p2);
  p2++;

}



}
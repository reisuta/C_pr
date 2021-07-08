#include<stdio.h>
#include "calc.h"

// double avg(double,double);


int main(){
  double d1, d2, d3;
  double a=1.1, b=3.3;

  d1= avg(a,b);
  d2= avg(1.5, 3.4);
  d3= avg(5.3, 2.3);
  printf("d1=%f.d2=%f.d3=%f",d1,d2,d3);

}


// double avg(double l, double m){
//   double r = (l+m)/2.0;
//   return r;
// }
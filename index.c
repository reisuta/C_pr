#include<stdio.h>

int main(){
  // printf("%d + %d = %d\n", 5,2,5+2);
  // printf("%d + %d = %d\n", 5,2,5-2);
  // printf("%d + %d = %d\n", 5,2,5*2);
  // printf("%d + %d = %d\n", 5,2,5/2);
  // printf("Hello world");
// int a;
// printf("数値を入力:");
// scanf("%d", &a);
// if(a>0){
//   printf("入力した値は正の整数です。");
// }
// int num;
// printf("1-3の値を入力してください。");
// scanf("%d", &num);

// switch (num)
// {
// case 1:
//   printf("one");
//   break;
// case 2:
//   printf("two");
//   break;
// case 3:
//   printf("three");
//   break;
// default:
//   printf("error");
//   break;
// }
// int i;
// for(i=0; i<5; i++){

//   printf("%d",i);
// }

char s1[4]= {'a','b','c','\0'};
char s2[]= "hello world";
char s3[10];
printf("s3 = %s\n", s3);

printf("文字列を入力してください。");
scanf("%s", s3);
printf("s1 = %s\n", s1);
printf("s2 = %s\n", s2);
printf("s3 = %s\n", s3);
}
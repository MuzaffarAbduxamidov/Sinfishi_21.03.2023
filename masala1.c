//21.03.2023.Seshanba
//Mavzu: Takrorlash jarayoni
//Takrorlash jarayoni 3 ta turga bo'linadi:
//    1-"while loop".
//    2-"do while loop".
//    3-"for loop".

//Takrorlanish jarayonini hosil qilish uchun 3 ta komponent berishimiz kerak:
//    1-start.
//    2-stop.
//    3-step.
//
//"while"ni "if"dan farqi shundaki, "if"da amal bajarilib bo'lgandan so'ng tugaydi lekin, "while"da esa amal qayta takrorlanadi.
//"while"dagi qovus ichi hech qachon bo'sh bo'lishi kerek emas.

#include <stdio.h>

int main(){
   int start=1;
//Masalan:   int start=1; //start
   while(start<=5){
      puts("Toshmat");
      start+=1;  //step -> start -> = start + 1
   }

/*Masalan:   int x=1;
             while(x<=5){
                printf("%d", x);
                x+=1;
*/


/*  int a;
  while(a<=10){
   a+=1;
   if(a%2==0)
    printf("%d\n",a);
*/

/*  int a=97;
  int b=122;
  while(a<=b){
    printf("%c\n",a);
      a+=1;
*/

/*   int son1;
   int son2;
   printf("Natural son kiriting:");
   scanf("%d", &son1);
   printf("Butun son kiritng:");
   scanf("%d", &son2);
   int b=son1+son2;
   int c=son1-son2;
   if(son2>0){
     while(c<=b){
       printf("%d\n",c);
       c+=1;
*/

/*   int a=50;
   while(a<=100){
     a+=1;
    if(a%2==0)
    printf("%d\n", a);
*/

/*    int a;
     printf("Son kiriting:");
      scanf("%d", &a);
    int b;
     printf("Son kiriting:");
      scanf("%d", &b);
    while(a<=b){
      a+=1;
      if(a%2==1){
      printf("%d\n", a);
*/

/*   int a;
    printf("Son kiriting:");
      scanf("%d", &a);
   int b;
    printf("Son kiriting:");
      scanf("%d", &b);
   while(a<=b){
     if(a%5==0 && a%9==0){
      printf("%d\n", a);
      }
      a++;
*/

/*   int a;
     printf("Son kiriting:");
       scanf("%d", &a);
   int b;
     printf("Son kiriting:");
       scanf("%d", &b);
   int c;
   while(a<=b){
     printf("%d\n",a*a);
     a++;
*/

/*   int a=1;
   int b;
   printf("Son kiriting:");
     scanf("%d", &b);
int natija2=0;
int natija1=0;
  while(a<=b){
   natija1=a*a;
   natija2=natija2+natija1;
   a++;}
   printf("%d\n", natija2);
*/

/*   int a=1;
   int b;
   printf("Son kiriting:");
   scanf("%d", &b);
    while(a<=b){
      if(b%2==1){
      printf("%d\n", b);
     } b--;
*/

/*   int a;
    printf("Son kiriting:");
      scanf("%d", &a);
   int b;
    printf("Son kiriting:");
      scanf("%d", &b);
  int natija=0;
   while(a<=b){
     if(a%5==0 && a%10!=0){
     natija=natija+a;
      }
      a++;}
     printf("Natija:%d", natija);
*/

/*   int a=1;
   int b;
   int toq=0;
   int juft=0;
   printf("Son kiriting:");
   scanf("%d", &b);
     while(a<=b){
      if(a%2==0){
       juft=juft+1;}
      else if(a%2==1){
       toq=toq+1;}
       a++;}
      printf("Juftlar:%d\n", juft);
      printf("Toqlar:%d", toq);
*/

/*    int a;
    printf("Son kiriting:");
      scanf("%d", &a);
   int b;
    printf("Son kiriting:");
      scanf("%d", &b);
  int natija=0;
   while(a<=b){
     if(a%5==0 && a%10!=0){
     natija=natija+a;
      }
      a++;}
     printf("Natija:%d", natija);
*/
/*   int a;
   int b;
   int daraja=0;
    printf("Son kiriting:");
      scanf("%d", &b);
    printf("Son kiriting:");
      scanf("%d", &a);
    while(a<=b){
      int daraja=a*b;
         a++;
}
printf("%d", daraja);
*/

}

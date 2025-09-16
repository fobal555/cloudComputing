#include<stdio.h>
#include<stdlib.h>
int add(int a, int b);

//add the substraction code --maesha
int sub(int a,int b);
// add the multiplaction code --cayden
int mul(int a, int b);
int main(){
    int value=add(5,5);
    printf("%d",value);
     int subvalue=sub(10,5);
      printf("\n %d",subvalue);
int val=mul(45,890);
printf("mul = %d",val);


}
int add(int a ,int b){
    return a+b;
}
int sub(int a , int b){
return a-b;
}
int mul(int a, int b){
return a*b;
}

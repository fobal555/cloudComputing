#include<stdio.h>
#include<stdlib.h>
int add(int a, int b);

//add the substraction code --maesha
int sub(int a,int b);
// add the multiplaction code --cayden

int main(){
    int value=add(5,5);
    printf("%d",value);
     int subvalue=sub(10,5);
      printf("\n %d",subvalue);


}
int add(int a ,int b){
    return a+b;
}
int sub(int a , int b){
return a-b;
}

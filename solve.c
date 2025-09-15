#include<stdio.h>
#include<stdlib.h>
int add(int a, int b);

int main(){
    int value=add(5,5);
    printf("%d",value);


}
int add(int a ,int b){
    return a+b;
}
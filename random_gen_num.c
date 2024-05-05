#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int rand_num;
    srand(time(0));
    rand_num=rand()%100+1; //now it will generate number between 1, 100
    printf("The number is: %d", rand_num);
    return 0;
}
#include<stdio.h>
#include<conio.h>\

int main()
{
    int marks[] = {10,20,30,40,50,60,70};
       int total;
    for(int i=0; i<3; i++){
 
         total = total + marks[i] ;

    }

printf("total is %d", total);
 return 0;   
}
#include<stdio.h>
#include<conio.h>

int main(void) {
    int a;    //新郎A 
    int b;    //新郎B 
    int c;    //新郎C 
    
    for(a=0; a<3; a++)
    for(b=0; b<3; b++)
    for(c=0; c<3; c++)
        if(a != 0 && c != 0 && c != 2 && a != b && b != c && a != c) {
            printf("A将娶%c\n", 'X'+a);
            printf("B将娶%c\n", 'X'+b);
            printf("C将娶%c\n", 'X'+c);
        }  
        
    getch();
}

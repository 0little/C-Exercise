#include<stdio.h>
#include<conio.h>

int main(void) {
    int a;    //����A 
    int b;    //����B 
    int c;    //����C 
    
    for(a=0; a<3; a++)
    for(b=0; b<3; b++)
    for(c=0; c<3; c++)
        if(a != 0 && c != 0 && c != 2 && a != b && b != c && a != c) {
            printf("A��Ȣ%c\n", 'X'+a);
            printf("B��Ȣ%c\n", 'X'+b);
            printf("C��Ȣ%c\n", 'X'+c);
        }  
        
    getch();
}

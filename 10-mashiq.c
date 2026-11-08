#include <stdio.h>

int main() {
    int n,i;
    for( i=1;i<=5;i++) {
        printf("Shuni unutmang son bir xonali. Sonni kiriting: ");
        scanf("%d",&n);
        if(n==7){
            printf("Tabriklayman siz maxfiy sonni topdingiz!");
            break;
        } if(i<5){
        printf("Yo'q siz maxfiy sonni topa olmadingiz yana urinib ko'ning.\n");
        }
    } if(i==6){
        printf(" siz maxfiy sonni topa olmadingiz maxfiy son 7");
    }
    return 0;
}
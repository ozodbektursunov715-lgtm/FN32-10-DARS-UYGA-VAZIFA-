#include <stdio.h>

int main() {
    int y=0;
    for (int i=1;i<=50;i++) {
        if(i%3!=0){
            continue;
        } y=y+i;
    } printf("1dan 50gacha 3ga bo'linadigan sonlar yig'indisi: %d",y);
    return 0;
}
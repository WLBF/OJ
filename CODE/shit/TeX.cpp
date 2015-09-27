#include<stdio.h>
int main(){ 
    int c , q = 0;
    while ((c = getchar()) != EOF){
        if (c == '"') {
            printf("%s", q ? "”":"“");
            q = !q;
        }    
        else printf("%c", c);
    }
}

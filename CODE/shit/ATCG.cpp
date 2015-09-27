#include<stdio.h>
#include<string.h>
using namespace std;

int main() {
    int n, i;
    scanf("%d", &n);
    char a[256];
    getchar();
    while(n--) {
        gets(a);
        int len = strlen(a);
        for(i=0;i<len;i++) {
            switch (a[i]) {
                case 'A':
                    printf("T");
                    break;
                case 'T' :
                    printf("A");
                    break;
                case 'G' :
                    printf("C");
                    break;
                case 'C' :
                    printf("G");
                    break;
            }
        }
        printf("\n");
    }
    return 0;
}

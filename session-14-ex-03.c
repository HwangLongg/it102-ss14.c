#include <stdio.h>
#include <string.h>
int main () {
    int c =0;
    char n[100]={"aiwnwajkka"};
    char b[100];
    for (int i =strlen(n)-1;i>=0;i--){
        b[c]=n[i];
        c++;
    }
    b[c]='\0';
    printf ("%s",b);
    return 0;
}
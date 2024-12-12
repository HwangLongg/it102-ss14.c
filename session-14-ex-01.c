#include <stdio.h>
#include <string.h>
int main (){
    char n[100];
    printf ("moi nhap vao chuoi bat ky ");
    scanf ("%s",n);
    printf ("chuoi vua nhap la %s \n",n);
    int a = strlen(n);
    printf ("do dai chuoi vua nhap %d ",a);
    return 0;

    }

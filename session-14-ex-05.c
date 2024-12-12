#include <stdio.h>
#include <string.h>
int main (){
    char n[100]={"hello world"};
    int a =1;
    for (int i =0; i < strlen(n);i++){
        if (n[i-1]==' '){
            a++;
        }
    }
    printf ("so chu cai trong mang la %d ",a);
    return 0;
}
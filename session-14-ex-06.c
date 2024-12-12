#include <stdio.h>
#include <string.h>
int main (){
    int c =0;
    char n[100]={"iau28h372  a97s7"};
    for (int i = 0; i < strlen(n);i++){
        if (n[i]<='z'&& n[i]>='a'){
            c++;
        }else if (n[i]<='Z'&&n[i]>='A'){
            c++;
        }
    }
    printf ("so chu cai trong mang la %d ",c);
    return 0;
}
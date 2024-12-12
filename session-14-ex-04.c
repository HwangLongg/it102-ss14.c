#include <stdio.h>
#include <string.h>
int main (){
    int c =0;
    char a ;
    char n[100]={"akoasunswwq"};
    printf ("moi nhap ki tu can tim ");
    scanf ("%c",&a);
    for (int i =0;i<strlen(n);i++){
        if (a==n[i]){
            c++;
        }
    }
    if (c==0){
        printf ("phan tu nhap khong co trong chuoi ");
        return 0;
    }
    printf ("so lan xuat hien cua %c la %d ",a,c);
    return 0;
}
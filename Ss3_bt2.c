#include <stdio.h>

int main(){
    int temp;
    printf("hay nhap nhiet do C : ");
    
    scanf("%d", &temp);
    float fah;
    fah = temp * 1.8 + 32 ;
    printf("%d do C khi chuyen qua do F la %.1f\n", temp, fah);

    return 0;
}
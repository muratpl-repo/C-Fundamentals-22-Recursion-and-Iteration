#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//ITERATIVE
int faktoriyel(int sayi){
    int sonuc=1;
    for(int i=0;i<sayi;i++){
        sonuc = sonuc * (i+1);
    }
return sonuc;
}
//RECURSIVE
int faktoriyelRekursif(int sayi){
    if(sayi<=1){
        return 1;
    }
    else {
        return sayi*faktoriyelRekursif(sayi-1);
    }
}
int main()
{
    setlocale(LC_ALL,"Turkish");
    printf("%d\n",faktoriyel(5)); //ITERATIVE
    printf("%d\n",faktoriyelRekursif(5)); //RECURSIVE

    return 0;
}

/*
Fazer um algoritmo que calcule a media aritmetica dos numeros 7, 8 e 9 e a media
nos numeros 4, 5 e 6. Mostre a soma das duas medias e a media das medias.
*/

#include <stdio.h>

int main(){
    
    int num4, num5, num6, num7, num8, num9;
    int  media1, media2, soma, mediaFinal;


        num4 = 4;
        num5 = 5;
        num6 = 6;    
        num7 = 7;
        num8 = 8;
        num9 = 9;


        media1 = (num7 + num8 + num9)/3;
        printf("A media dos valores %d, %d, %d eh: %d\n", num7, num8, num9, media1);
    
        media2 = (num4 + num5 + num6)/3;
        printf("A media dos valores %d, %d, %d eh: %d\n", num4, num5, num6, media2);

        soma = media1 + media2;
        printf ("A Soma dos valores %d e %d eh: %d\n", media1, media2, soma);
        

        
        mediaFinal = (media1 + media2)/2;
        printf("A media das medias %d e %d eh: %d", media1, media2, mediaFinal);
            
    return 0;
}

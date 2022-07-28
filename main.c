#include <stdio.h>
#include <stdlib.h>

char opr;
int x, y;

int main(void)
{
    printf("Isleminizi seciniz(+, -): ");
    scanf("%c", &opr);

    printf("Iki tamsayi giriniz: ");
    scanf("%d %d", &x, &y);
    if(x == 0 || y == 0)
        printf("Islem yapilamiyor.");
    else
    {

    printf("1/%d %c 1/%d = ", x, opr, y);

    switch(opr)
    {
        case '+': printf("%d/%d", x+y, x*y);
                  break;
        case '-': printf("%d/%d", y-x, x*y);
                  break;
        default:  printf("Yanlis operator girildi.") ;
    }
    }
    return(0);
}

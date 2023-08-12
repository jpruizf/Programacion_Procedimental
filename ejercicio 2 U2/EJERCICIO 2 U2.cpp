#include<stdio.h>
#include<string.h>
#define Y 30
void cambiar(char ax[Y])
{
    int i = Y;
    while(i > 0)
    {
        if(ax[i] == '2')
        {
            ax[i] = '0';
            i = 0;
        }
        else{
            i--;
        }
    }
    return;
}
void replicar(char ax[Y], char bx[Y])
{
    int i = 0;
    while(i < Y)
    {
        i++;
        strncpy(bx,ax,12);
    }
    puts(bx);
    return;
}
void contar_vocales(char ax[Y])
{
    int cont;
    cont = 0;
    for(int i = 0; i < Y; i++)
    {
        if(ax[i] == 'A' || ax[i] == 'E' || ax[i] == 'I' || ax[i] == 'O' || ax[i] == 'U')
        {
            cont++;
        }
    }
    printf("TOTAL DE VOCALES --> %d",cont);
    return;
}
//Algoritmo principal
int main()
{
    char a[Y] = {"Programacion procedural 2022"};
    char b[Y];
    strupr(a);
    puts(a);
    cambiar(a);
    puts(a);
    replicar(a,b);
    contar_vocales(a);
}

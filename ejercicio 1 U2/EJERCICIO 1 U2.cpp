#include<stdio.h>
#define N 20

void cargar(int x[N])
{
    for(int i=0; i<N;i++)
    {
        x[i] = ((21*i)% 2);
    }
    return;
}
void mostrar(int x[N])
{
    int bandera, pos;
    bandera = 0;
    for(int i=0; i< N; i++)
    {
        if(x[i] == 0)
        {
            bandera = 1;
            pos = i;
        }
    }
    if(bandera == 1)
    {
        printf("Existe un cero en la posicion --> %d", pos);
    }
    else
    {
        printf("No existe un cero entre los elementos del arreglo");
    }
    return;
}
void reemplazar(int x[N])
{
    int b, i= 0;
    while(x[i]%2 != 0)
    {
        i+=1;
    }
    if(x[i]%2 == 0)
    {
        x[i] = b;
        printf("Ingresar un numero al arreglo:");
        scanf("%d", &b);
    }
    return;
}
void ver_arreglo(int x[N])
{
    for(int i=0; i<N;i++)
    {
        printf("Elementos del arreglo --> x[%d]\n", x[i]);
    }
    return;
}
int contar(int x[N])
{
    int y;
    for(int i=0;i<N;i++)
    {
        y = 0;
        if(x[i]%2 == 0)
        {
            y += 1;
        }
    }
    return (y);
}
void ver_total(int y)
{
    printf("El total de elementos numeros pares que contiene el arreglo es de --> %d", y);
    return;
}
//Algoritmo principal
int main()
{
    int a[N],k,m;
    do
    {
        printf("***********MENU DE OPCIONES**************\n");
        printf("1. VER SI EXISTE UN CERO ENTRE LOS ELEMENTOS DEL ARREGLO\n");
        printf("2. AGREGAR CONTENIDO AL ARREGLO EN LAS POSICIONES PARES\n");
        printf("3. VER CANTIDAD DE NUMEROS PARES QUE CONTIENE EL ARREGLO ENTRE SUS ELEMENTOS\n");
        printf("4. Salir\n");
        scanf("%d", &k);
        switch(k)
        {
            case 1: cargar(a); mostrar(a);break;
            case 2: reemplazar(a); ver_arreglo(a);break;
            case 3: m = contar(a); ver_total(m);break;
            case 4: return 0;break;
        }
    }while(k != 0);
}

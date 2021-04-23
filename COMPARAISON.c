#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(int argc, char *argv[])
{
    int tab[3]={};
    int a, b, c;
    printf("Entrer a:");
    scanf("%d", &a);
    tab[0]=a;
    printf("Premier element=%d\n", tab[0]);
    
    printf("Entrer b:\n");
    scanf("%d", &b);
    tab[1]=b;
    printf("Deuxieme element=%d\n", tab[1]);

   
    printf("Entrer c:\n");
    scanf("%d", &c);
    tab[2]=c;
    printf("Troisieme element=%d\n", tab[2]);
    printf("La somme de ces trois éléments est %d\n\n", tab[0]+tab[1]+tab[2]);
    printf("tab[3]={%d;%d;%d}\n", tab[0], tab[1], tab[2]);
    if(tab[0]>tab[1] && tab[0]>tab[2] && tab[1]>tab[2]){
    printf("Le plus grand nombre est %d et le plus petit est %d", tab[0], tab[2]);
    } 
    
    else if(tab[1]>tab[2] && tab[1]>tab[0] && tab[2]>tab[0]){
    printf("Le plus grand nombre est %d et le plus petit est %d", tab[1], tab[0]);
    } 
    
    else if(tab[2]>tab[0] && tab[2] > tab[1] && tab[0] > tab[1]){
    printf("Le plus grand nombre est %d et le plus petit est %d",tab[2], tab[1]);
    } 
     else if(tab[2]>tab[0] && tab[2]>tab[1] && tab[1]>tab[0]){
    printf("Le plus grand nombre est %d et le plus petit est %d", tab[2], tab[0]);
    }
     else if(tab[0]>tab[2] && tab[0]>tab[1] && tab[2]>tab[1]){
    printf("Le plus grand nombre est %d et le plus petit est %d", tab[0], tab[1]);
    }
     else{
    printf("Le plus grand nombre est %d et le plus petit est %d", tab[1], tab[2]);
    }
    return 0 ;
}
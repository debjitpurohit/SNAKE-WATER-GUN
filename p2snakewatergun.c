#include <stdio.h>
#include<stdlib.h>
#include <time.h>
 // you s and cocmp g then gun shppt the snake and comp win...you snake and computer w then you win
int snakewaterGun(char you,char comp){
    if (you==comp){
        return 0;
    }
    else if ((you=='s' && comp=='w') || (you=='w' && comp=='g') || (you=='g' && comp=='s')) 
    {
      return 1;  
    }
    else{
        return -1;
    }
    
}
int main(){
    char you, comp;
    srand(time(0));
    int number = rand ()%100 +1 ;
    if(number<33){
        comp ='s';
    }
    else if (number<66)
    {
        comp= 'w' ;
    }
    else
    {
        comp= 'g' ;
    }
     
    
    printf("Enter 's' for snake , 'w' for water , 'g' for gun \n");
    scanf("%c",&you);
    int result = snakewaterGun(you,comp);
    if(result ==0){
        printf("Game Draw \n");

    }
    else if (result==1){
        printf("You win \n");
    }
    else{
        printf("you lose \n");
    }
    printf("you choose %c and the computer choose %c \n",you ,comp);
    return 0;
}
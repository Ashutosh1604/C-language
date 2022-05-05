#include<stdio.h>
#include<stdlib.h>
#include<time.h>


 int SnakeWaterGun(char you,char comp)
 {//if you win return 1, if u lose return -1 and if match draw return 0
     //draw condition
     if(you == comp){
        return 0;
     }
     //not draw conditions
     if(you=='s'&& comp=='w'){
        return 1;
     }
    else if(you=='w' && comp=='s'){
        return -1;
     }

      if(you=='s'&& comp=='g'){
        return -1;
     }
    else if(you=='g'&& comp=='s'){
        return 1;
     }

     if(you=='w'&& comp=='g'){
        return 1;
     }
    else if(you=='g'&& comp=='w'){
        return -1;
     }

 }


int main()
{
    char you;
    char comp;
    int number;

    //choosing random choice
    srand(time(0));
    number=rand()%100+1;
    if(number<33){
        comp='s';
    }
    else if(number>33 && number<66)
    {
        comp='w';

    }
    else{
        comp='g';
    }

    printf("Enter 's' for snake,'w' for water and 'g' for gun\n");
    scanf("%c",&you);
    int result= SnakeWaterGun(you,comp);

    printf("you choose %c and computer choose %c\n",you,comp);
    if(result==0){
        printf("Game Draw!!\n");
    }
    else if(result==1){

        printf("You Win!!\n");
    }
    else{

        printf("You Lose!!\n");
    }
return 0;
}

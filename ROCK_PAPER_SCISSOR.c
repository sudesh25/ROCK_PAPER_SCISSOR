#include<stdio.h>   
#include<stdlib.h>
#include<time.h>
int rockpaperscissor(char you,char comp);

int main() 
{ 
   char you, comp;
   int num;
   srand(time (0));
   srand(time (0));  
   srand(time (0));      
   num = rand() % 100 + 1;  
  // printf("%d",num);
   if(num<=33) 
   {
    comp='s';
   } 
   else if(33< num <=66) 
   {
     comp='r';
   } 
   else 
   {
    comp='p';
   }
   printf("\n*****ROCK_PAPER_SCISSOR*****\n");
   printf("Enter 's' to choose Scissor, 'p' for Paper and 'r' for Rock\n");
   scanf("%c",&you);
   int result=rockpaperscissor(you,comp);  
   printf("You Choose %c and Computer choose %c: \n",you,comp);
   if(result==0) 
   {
    printf("Game Drawn..!");
   } 
   else if(result==1) 
   { 
    printf("You Win The Game..!");
   } 
   else 
   { 
    printf("Computer Win..!");
   }
   return 0;
} 
int rockpaperscissor(char you,char comp)
 {
    {
     if(comp==you) 
     { 
        return 0;
     } 
     else if(comp=='r' && you=='s')
     {
        return -1; 
     }  
     else if(comp=='r' && you=='p') 
     { 
        return 1;
     } 
     else if(comp=='p' && you=='s') 
     { 
        return 1;
     } 
     else if(comp=='p' && you=='r') 
     { 
        return -1;
     } else if(comp=='s' && you=='p') 
     { 
        return -1;
     } 
     else 
     { 
        return 1;
     } 
     
}
 }
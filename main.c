#include <stdio.h>

main(){
    
    int flag, i, j, sum;
    char A[51], character, exceed;
    
    printf("Welcome,\n");
    printf("You determine whether a phrase is a palindrome or not.\n");
    
    do{
         
         flag=1;
         
         printf("\n");
         printf("Please type a sentence of 50 characters or less: ");
         
         scanf("%c", &character);
         i=0;
         while ((i<50)&&(character!='\n'))
         {
             A[i]=character;
             scanf("%c", &character);
             i++;
         }
         
         printf("\n");
         
         if (i==1){
            
             printf("An 1 character long phrase can't be a palindrome.\n");
             flag=0;
         }else if (i >= 50){
              
             printf("You have to enter a phrase which is maximum 50 characters long.\n");
             flag=0;
              
             scanf("%c", &exceed);
             i=0;
             while (exceed!='\n')
             {
                 scanf("%c", &exceed);
                 i++;
             }
         }
         
         if (flag==1)
         {
             i--;
             j=0;
             sum=i;
             while ((i>0)&&(j<50))
             {      
                 if (A[i]!=A[j])
                     flag=0;
                 i--;
                 j++;
             }
             if (flag==0)
                 printf("The phrase you entered is not a palindrome :(\n");
             else
                 printf("The phrase you entered is a palindrome :)\n");
         }  
         
    }while(1);
    
}



#include <stdio.h>
#include <conio.h>

int day;

main(){
       
       printf("Enter day...");
       scanf("%i",&day);
       
       switch(day){
              
              case 1:{
                   printf("Monday");
                   break;
                   }
              case 2:{
                   printf("Tuesday");
                 break;
                   }
              case 3:{
                   printf("Wensday");
                   break;
                   }
              case 4:{
                   printf("Thursday");
                  break;
                   }
              case 5:{
                   printf("Friday");
                  break;
                   }
              case 6:{
                   printf("Saturday");
                   break;
                   }
              case 7:{
                   printf("Sunday");
                   break;
                   }
                   default:
                           {
                           printf("No such day has been found. Please enter a value 0 ... 7");
                           }
                   
              
              }
       
       getch();
       }

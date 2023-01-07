#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <time.h>



int masrand(int size, int massive[]){
    
    
    srand(time(NULL));
    
    for(int i=0;i<size;i++){
            
            massive[i]=rand()%10;        
            
         
            }
              for(int i=0;i<size;i++){
            
            printf("%3i ", massive[i]);
            
            
            }
            printf("\n enter to countinue... \n ");
            
            getch();

    }

main(){
       
       int size=0 , size2=0;
       int mass[size], mass2[size2];

       
       printf("Enter size of massive 1\n");
       scanf("%i", &size);

       
       masrand(size, mass);
     
       printf("\n Enter size of massive 2\n");
       scanf("%i", &size2);
       
       masrand(size2, mass2);
       return 0;
       getch();
       }

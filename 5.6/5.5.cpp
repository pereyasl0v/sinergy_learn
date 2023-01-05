#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

main(){
       
       int n,m;
       int mass[100][100];
int cache, globcache;
       
       printf("Enter number n elements  ");
       scanf("%i",&n);
       
       printf("Enter number n elements  ");
       scanf("%i",&m);
       
       if((n>1)&&(n<100)&&(m>1)&&(m<100)){
                         

       for(int j=0;j<m;j++){
               for(int i=0;i<n;i++){                  
                  scanf("%i", &mass[i][j]);             
                       }
                       
               }
               
   for(int j=0;j<m;j++){
   for(int i=0;i<n;i++){ 
                        
       for(int j=0; j<m ;j++){
               for(int i=0;i<n-1;i++){ 
                        
                   if(mass[i][j]>mass[i+1][j]){
                              
                              cache=mass[i][j];
                              mass[i][j]= mass[i+1][j];
                              mass[i+1][j]=cache;
                         
                   }
                   }
                   }
                   }
                   }
                           
                          
                                         
             for(int j=0;j<m;j++){
                     
                      printf("%\n\n");
               for(int i=0;i<n;i++){
                       
                                globcache=mass[i][0];
                                mass[i][0]=mass[i][m-1];
                                mass[i][m-1]=globcache;  
                       
                  printf("%3i" , mass[i][j]);
                       
                       }
               
               }
               }else{
                     printf("Enter number n and m from 2...100");
                     }
                     
                     getch();
       }

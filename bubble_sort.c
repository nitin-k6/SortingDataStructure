#include<stdio.h>
#include<conio.h>
#include <stdlib.h>

void swap( int *x, int *y){

    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

void Bubble(int A[] , int n){

int i , j ;
int flag;
    for(i=0; i<n-1; i++){
       flag=0;
       for(j=0; j<n-1-i; j++){
           
           if(A[j]>A[j+1]){
               swap (&A[j], &A[j+1]);
               flag=1;
           }
       }
       if (flag==0)
       break;
    }
}


int main(){


   int  A[]= {1 , 3 ,5 , 6 , 9 ,7 , 10 , 8 , 11 , 14 ,2 , 12};
   int n=12;
   int i;
    Bubble(A, 12);
      
      for(i=0; i<10; i++){
    printf("%d" , A[i]);
     printf("\n");
      }

      return 0;
}
#include<stdio.h>
#include<stdlib.h>

void swap(int *x , int *y){

int temp;
temp=*x;
*x=*y;
 *y=temp;

}

void Insertion(int A[], int n){

     int i ,j,x;

    for(i=1; i<n; i++){
     j=i-1;
     x=A[i];
     
     while(j>-1 && A[j]>x){
        A[j+1]=A[j];
         j--;

     }
     A[j+1]=x;
    }
}

int main(){

  int  A[]= {1 , 3 ,5 , 6 , 9 ,7 , 10 , 8 , 11 , 14 ,2 , 12};
  int n=12;
  int i;
  Insertion(A ,12);

  for(i=0; i<12; i++){
      printf("%d" ,A[i]);
      printf("\n");
  }
    return 0;
}
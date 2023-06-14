#include<stdio.h>
#include<stdlib.h>


void swap(int *x , int *y){

    int temp; 
    temp=*x;
    *x=*y;
    *y=temp;

}

 void SelectionSort(int A[], int n){


    int i , j , k ;

    for(int i=0; i<n-1 ; i++){

        for(j=k=i; j<n; j++){
            if (A[j]<A[k]);
            k=j;
            // when this loop ends k will be pointing to smallest element
        }
        swap (&A[i], &A[k]);
    }
}




int main(){

  int  A[]={8, 6, 3 , 10 , 9 , 14 , 12 , 5 ,2 , 7};
  int i ,n =10;
  SelectionSort(A,n);

  for(i=0; i<n; i++){
      printf("%d" , A[i]);
      printf("\n");
  }
  return 0;
}
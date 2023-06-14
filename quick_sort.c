#include<stdio.h>
#include<stdlib.h>

void swap(int *x , int *y) {
int temp;

temp=*x;
*x=*y;
*y = temp;
}


int partition(int A[] , int l , int h )
{
int pivot=A[l];
int i=l;
int j=h;

do{

do{
    i++ ;
}while(A[i]<= pivot);

do{
    j-- ;
}while(A[j]>pivot);

if(i<j){
    swap(&A[i], &A[j]);
}


}while(i<j);
swap(&A[l] , &A[j]);
return j;
}

void QuickSort(int A[], int l , int h)
{
    int j;
if(l<h){
    j=partition(A ,l , h);
    QuickSort(A , l ,j);
    QuickSort(A ,j+1 ,h);
}
}

int main(){

    int A[] = {1 , 8 , 5 ,3 ,7 ,10 ,2 ,8 ,6 ,16 ,15 ,19  ,4};
    int i;
    int n=13;

    QuickSort(A ,0, 13);

    for(int i=0; i<13; i++){
        printf("%d" ,A[i] );
        printf("\n");
    }

return 0;
}


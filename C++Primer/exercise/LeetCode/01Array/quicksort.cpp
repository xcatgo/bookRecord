#include <iostream>

void swap(int& a, int& b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void quicksort(int A[],int l,int r){
   int m=l;
   for(int i=l;i<r;i++){
      if(A[i]<A[r]){
         swap(A[i],A[m]);
         ++m;
      }
   }
   swap(A[m],A[r]);
   if(m>l+1)quicksort(A,l,m-1);
   if(m<r-1)quicksort(A,m+1,r);
}
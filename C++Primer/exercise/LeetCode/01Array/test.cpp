#include <iostream>
#include "quicksort.h"

using namespace std;

int main(){
   int A[10];
   for(int i=0;i<10;i++) A[i]=10-i;
   for(int i=0;i<10;i++) std::cout << A[i] <<' ';
   std::cout<<std::endl;
   quicksort(A,0,10-1);
   for(int i=0;i<10;i++) cout<<A[i]<<' ';
}
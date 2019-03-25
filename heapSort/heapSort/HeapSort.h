//
//  Header.h
//  heapSort
//
//  Created by Jonathan Raysor on 3/24/19.
//  Copyright © 2019 Jonathan Raysor. All rights reserved.
//

#ifndef Header_h
#define Header_h
#include <vector>
#include <math.h>

using namespace std;

//static int parent(int i){
  //  return floor(i/2);
//}


unsigned long int leftChild(unsigned long int i){
    
    return ((2*i));
}

unsigned long int rightChild(unsigned long int i){
    return ((2*i) + 1);
}



void maxHeapify(vector<int> &A, unsigned long int i){

    unsigned long int sizeOfHeap = A.size();
    unsigned long int l = leftChild(i);
    unsigned long int r = rightChild(i);
    unsigned long int largest = 0;
    
   if(l <= sizeOfHeap && A[l] > A[i])
       
       largest = l;
    
    else
        largest = i;
    
    if(r <= sizeOfHeap && A[r] > A[largest])
        
        largest = r;
    
    if (largest != i){
        swap(A[i],A[largest]);
        maxHeapify(A, largest);
    }
}


static void buildMaxHeap(vector<int> &A){
    
    unsigned long int sizeOfHeap = A.size();
    
    for(unsigned long int i = floor((sizeOfHeap/2)); i >= 1; i--)
        maxHeapify(A, i);
    
}


#endif /* Header_h */

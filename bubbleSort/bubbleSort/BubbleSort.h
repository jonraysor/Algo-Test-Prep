//
//  BubbleSort.h
//  bubbleSort
//
//  Created by Jonathan Raysor on 2/19/19.
//  Copyright © 2019 Jonathan Raysor. All rights reserved.
//

#ifndef BubbleSort_h
#define BubbleSort_h

// can be used for any data type
template <class T>

// void return type because the array is sorted in place and nothing is returned
// 1st: pointer to beginning of array
// 2nd: size of array being passed
void BubbleSort(T * A, int size){
    
    // i will iterate through each element setting it as the element to start
    // comparisons from
    for (int i = 0; i < size; i++)
        // j will compare all elements past a[i]
        // and swap[ if needed
        for(int j = size; j > i; j--)
            // swap
            if (A[j] < A[j - 1]){
                T hold = A[j];
                A[j] = A[j - 1];
                A[j - 1] = hold;
            }
    
}

#endif /* BubbleSort_h */

//
//  SelectionSort.h
//  selectionSort
//
//  Created by Jonathan Raysor on 2/19/19.
//  Copyright © 2019 Jonathan Raysor. All rights reserved.
//

#ifndef SelectionSort_h
#define SelectionSort_h

// can be used with any data type
template <class T>

// return type of 'void' because the array will be sorted in place
// 1st: pointer to beginning of array to be sorted
// 2nd: size of array to be sorted
void SelectionSort(T * A, int size){
    
    // for loop used to iterate from A[0] to A[n-1]
    for (int i = 0; i < size; i++){
        
        // the temporary smallest number is A[i] which is compared to
        // n-1 numbers looking for a number that's is smaller
        T smallest  =  A[i];
        
        // for loop that stays ahead of i to compare the values
        // checking if the values are less than i
        for(int j = i + 1; j <= size; j++){
            
            // if A[j] is less than A[i] they will be swapped
            if (smallest > A[j]){
                // swapping process
                int hold = A[i];
                A[i] = A[j];
                A[j] = hold;
            }
        }
    }
    
    
}

#endif /* SelectionSort_h */

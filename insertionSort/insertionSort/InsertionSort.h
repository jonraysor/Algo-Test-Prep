//
//  InsertionSort.h
//  insertionSort
//
//  Created by Jonathan Raysor on 2/19/19.
//  Copyright © 2019 Jonathan Raysor. All rights reserved.
//

#ifndef InsertionSort_h
#define InsertionSort_h

// can be used for any data type with the '=', '>=', and '>' operators definied
template <class T>

// void function return type because nothing is to be returned
// 1st: the array passed by reference because it is being changed in place
// 2nd: the size of the array is passed to be used in the for loop conditions
void InsertionSort(T * A, int size){
    
    // j stays ahead of i to be compared throughout the loop (j = 1)
    // j goes to the last element of the array to make sure everything is compared
    // j is incremented each time to continuously check if it is less than i (key)
    for(int j = 1; j <= size; j++){
        
        // key will be used as a "hold" and like that of bubble sort
        int key = A[j];
        
        // at the beginning of the loop i is to be less than j
        // for comparison
        int i = j - 1;
        
        // this is the loop invariant
        // i must always be greater than or equal to 0
        // A[i] (the value) must always be greater than key
        // for this while loop to be executed
        while(i >= 0 && A[i] > key){
            // since the previous statement is true (we're in the loop)
            // the following must be executed
            
            // the element to the right of A[i] is given the greater value
            A[i+1] = A[i];
            
            // I is decrememnted to check if any other elements need to be swapped
            i -= 1;
        }
        
        // finally key is placed in it's respective index in the array
        A[i+1] = key;
    }
}

#endif /* InsertionSort_h */

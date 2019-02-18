//
//  MergeSort.h
//  mergeSort
//
//  Created by Jonathan Raysor on 2/17/19.
//  Copyright © 2019 Jonathan Raysor. All rights reserved.
//

#ifndef MergeSort_h
#define MergeSort_h

// to be used with any data type
template<class T>
// not returning anything therefore void function type is used
// 1st: POINTER the array to be hold the sorted values
// 2nd: the left side of the array (arr[0] - arr[midpoint])
// 3rd: POINTER the midpoint of the array (arr.size()/2)
// 4th: the right side of the array (arr[midpoint+1 - arr.size())

static void merge(T * A, int mid, T * A2, int end){
    
    // allocate an array that will be used to hold our sorted elements
    int * temp = new int [mid + end];
    
    // these will be used to hold the current index of our 'three' arrays
    int leftIndex = 0;
    int rightIndex = 0;
    int tempIndex = 0;
    
    // this loop will be used to compare the two given arrays while their
    // indicies are not further than granted
    while(leftIndex <= mid && rightIndex < end){
        
        // comparison
        if (A[leftIndex] <= A2[rightIndex]){
            temp[tempIndex] = A[leftIndex];
            leftIndex += 1;
        }
        
        else{
            temp[tempIndex] = A2[rightIndex];
            rightIndex += 1;
        }
        
        tempIndex += 1;
    }
    // if one array's index reaches it's length
    // the remainer of the other array is to be put into the temp array
    
    while(leftIndex <= mid){
        temp[tempIndex] = A[leftIndex];
        leftIndex += 1;
        tempIndex += 1;
    }
    
    while(rightIndex <= end){
        temp[tempIndex] = A2[rightIndex];
        rightIndex += 1;
        tempIndex += 1;
    }
    
    // finally, the array to be returned is filled with the sorted elements
    for(int i = 0; i < tempIndex; i++){
        A[i] = temp[i];
    }
    
    // deallocate the temporary array to prevent memory leaks
    delete [] temp;
}

template<class T>
void mergeSort(T * arr, int size){
    
    if(size <= 1)
        return;
    
    int midPoint = size/2;
    
    mergeSort(arr,midPoint);
    
    mergeSort(arr + midPoint, size - midPoint);
    
    merge(arr, midPoint, arr + midPoint, size);
}



#endif /* MergeSort_h */

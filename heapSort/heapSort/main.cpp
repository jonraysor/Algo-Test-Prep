//
//  main.cpp
//  heapSort
//
//  Created by Jonathan Raysor on 3/24/19.
//  Copyright © 2019 Jonathan Raysor. All rights reserved.
//

#include <iostream>
#include "HeapSort.h"
#include <vector>

int main(int argc, const char * argv[]) {
    // insert code here...
 
    vector<int> arr{16,4,10,14,7,9,3,2,8,1};
    
    buildMaxHeap(arr);
    
    for (int elem : arr)
        cout << arr[elem] << " ";
    
    
    return 0;
}

//
//  main.cpp
//  bubbleSort
//
//  Created by Jonathan Raysor on 2/19/19.
//  Copyright © 2019 Jonathan Raysor. All rights reserved.
//

#include <iostream>
#include "BubbleSort.h"

using namespace std;

int main(int argc, const char * argv[]) {
    int numbers[6];
    
    for (int i =0; i < 5; i ++){
        cout << "Enter a random number" << endl;
        cin >> numbers[i];
    }
    
    BubbleSort(numbers, 5);
    
    //quickSort(numbers,0, 5);
    
    for (int i=0; i <5; i++){
        cout << numbers[i] << endl;
    }
    return 0;
    return 0;
}

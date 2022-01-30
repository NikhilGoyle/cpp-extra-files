int *duplicateEvenNumbers(int *x, int count, int &newCount) {
    if (count == 0) {
        return x;
    }
    
    int myCount = count;
    for (int i = 0; i < count; ++i) {
        if (x[i] %2 == 0) {
            myCount += 1;
        }
    }//gets the newCount by checking for evens
    newCount = myCount;
    int* newArray = new int[myCount]{};//create return array

    int tracker = 0;
    for (int i = 0; i < count; ++i) {
        newArray[tracker] = x[i];//adds odds/first even
        if (x[i] %2 == 0) {
            tracker +=1;
            newArray[tracker] = x[i];
        }//adds the second even if it exists
    }

    return newArray;
}


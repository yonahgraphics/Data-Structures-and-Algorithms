//
// Created by yonahgraphics on 2021/07/07.
//

int main(){
    int intArray [] = {7,8,9};

//Get array length
    int arrayLength = sizeof(intArray)/sizeof(intArray[0]);

    //Print array before reversing
    std::cout<<"Before\n";
    for(int i = 0; i < arrayLength; i++)
        std::cout<<intArray[i]<<" ";

    //Reverse the array
    //1. Maintain two pointers at the beginning and end of the array
    //2.While these pointers have not met yet, swap the values they are pointing to
    //3.Increment the first pointer and decrement the last pointer
    //5. That's it
    int i, j;
    i = 0;
    j = arrayLength-1;
    int temp;

    while (i < j){
        temp = intArray[i];
        intArray[i] = intArray[j];
        intArray[j] = temp;
        i++;
        j--;
    }
    std::cout<<"\nAfter\n";
    for(int i = 0; i < arrayLength; i++)
        std::cout<<intArray[i]<<" ";

    return 0;


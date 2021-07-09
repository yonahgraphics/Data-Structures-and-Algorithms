public class reverseArray {

    public static void main(String[] args) {
        int array[] = {1, 2, 3,7};
        int reverseArray[] = new int[array.length];
        reverseArray = reverseArray(array);

        for(int i = 0; i < array.length; i++)
            System.out.print(reverseArray[i] + " ");

    }


    static int [] reverseArray(int[] intArray){


//Get array length
        int arrayLength = intArray.length;

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

        return intArray;
    }




}


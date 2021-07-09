//
// Created by yonahgraphics on 2021/07/07.
//


int main(){
    std::string name = "Yonah";

    //-------------------------------------------------------------------
    //              METHOD 1
    //-------------------------------------------------------------------


    //Get the length of the string
    int len = name.length();

    //Create a empty string to hold the reversed string
    std::string reverse = "";
    //Loop over the string as you reverse it
     for(int i = 0; i< len; i++)
         reverse = name[i] + reverse;

    //print the reversed string
    std::cout<<reverse;


 //-------------------------------------------------------------------
 //              METHOD 2
 //-------------------------------------------------------------------


    //Create two integers
    int i, j;
    //Create a temporary character
    char temp;
    //set the characters to the first and last characters respectively
    i = 0;
    j = len-1;

    //While i is less than j, swap the characters they point to
    while (i < j){
        temp = name[i];
        name[i] = name[j];
        name[j] = temp;
        i++;
        j--;
    }

    //Print the reversed string
    std::cout<<name;
    return 0;
}
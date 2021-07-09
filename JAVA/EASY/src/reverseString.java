public class reverseString {
    public static void main(String[] args) {

        System.out.println(reverseString("Hello world!"));

    }


    static String reverseString(String str)
    {
        //Get the length of the string
        int len = str.length();

        //Create a empty string to hold the reversed string
        String reverse = "";
        //Loop over the string as you reverse it
        for(int i = 0; i< len; i++)
            reverse = str.charAt(i) + reverse;

        return reverse;

    }
    }

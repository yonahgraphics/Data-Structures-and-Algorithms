//
// Created by yonahgraphics on 2021/07/09.
//
//
//Use a hasmap to keeptrack of each letter count in a string. Check if the letter is not it the
//hashmap and if not, put it there and increase its count by 1. At the end, you want the first letter
//        whose count is exactly 1. Get it's index and you're done.

public:
    int firstUniqChar(string s) {

    map data;

    int index;

    int arrayLength = s.size();

    for(int i = 0; i< arrayLength; i++)
        data[s[i]] = -1;

    for(int i = 0; i< arrayLength; i++)
    {
        if(data[s[i]] == -1)
            data[s[i]] = 1;
        else
            data[s[i]] += 1;
        }

    for(int i = 0; i< arrayLength; i++)
    {
        if(data[s[i]] == 1){
            index = i;
            return index;
        }
    }
        return -1;

    }

};
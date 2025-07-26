class Solution {
public:
    int strStr(string haystack, string needle) {
        if (haystack.length() < needle.length()){
            return -1;
        }
        int i=0, j=0, k=0;
        bool flag = false;
        while(i<haystack.length() && j<needle.length()){
            if (haystack[i] == needle[j]){
                if (j==0){k = i;}
                i++;
                j++;
                k = min(k,i);
            }
            else if (haystack[i] != needle[j]){
                if (j>0){
                    i = k +1 ;
                }
                else {i++;}
                j=0;

            }
            if (j==needle.length()){
                flag = true;
                break;
            }
        }
        return flag==true ? k:-1;
    }
};

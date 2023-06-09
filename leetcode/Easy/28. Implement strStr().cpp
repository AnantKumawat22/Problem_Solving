int strStr(string haystack, string needle) {
    if (haystack.length() < needle.length()) return -1;
    if (needle == "") return 0;
    
    for(int i = 0; haystack[i]; i++)
        for(int j = 0; ; j++){
            if(!needle[j]) return i;
            if(!haystack[i + j]) return -1;
            if(haystack[i + j] != needle[j]) break;
        }
    return -1;
}
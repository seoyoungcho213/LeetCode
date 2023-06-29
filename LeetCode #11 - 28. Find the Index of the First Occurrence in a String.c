int strStr(char * haystack, char * needle){
    int out = -1;
    int j = 0;

    for(int i = 0; haystack[i] != NULL; i++) {
        if(haystack[i] == needle[0]) {
            out = i;
            for(j = 1; (needle[j] != NULL) && (haystack[i+j] != NULL); j++) {
                if(haystack[i+j] != needle[j]) {
                    out = -1;
                    break;
                }
                out = i;
            }
            if((needle[j] != NULL) && (haystack[i+j] == NULL)) {
                return -1;
            }
        }
        if(out != -1) {return out;}
    }

    return out;
}

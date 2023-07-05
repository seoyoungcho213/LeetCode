char * longestCommonPrefix(char ** strs, int strsSize){
    char* prefix = strs[0];
    char* out[200];
    int max = strlen(strs[0]);

    for(int i = 0; i < strsSize; i++) {
        if(max < strlen(strs[i])){max = strlen(strs[i]);}
        
        for(int j = 0; j < max; j++) {
            if(prefix[j] == NULL) {break;}
            else if(prefix[j] != strs[i][j]) {
                prefix[j] = NULL;
                break;
            }
        }
    }

    for(int i = 0; prefix[i] != NULL; i++) {
        out[i] = prefix[i];
    }

    return prefix;
}

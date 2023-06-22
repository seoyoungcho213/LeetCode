bool isSubsequence(char * s, char * t){
    int j = 0;
    int k = 1;

    if(strlen(s) == 0) {return true;}

    for (int i = 0; t[i] != NULL; i++) {
        if(t[i] == s[0]) {
            if(strlen(s) == 1) {return true;}
            for(j = 1; t[i+j] != NULL; j++) {
                if(t[i+j] == s[k]) {
                    k++;
                    if(s[k] == NULL) {return true;}
                }
            }
            if(t[i+j] == NULL) {return false;}
        }
    }

    return false;
}

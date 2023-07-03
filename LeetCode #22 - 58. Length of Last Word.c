int lengthOfLastWord(char * s){
    int word = 0;
    
    for(int i = strlen(s) - 1; i >= 0; i--) {
        if(!(word == 0 && s[i] == ' ')) {
            if(s[i] == ' ') {break;}
            else {word++;}
        }
    }

    return word;
}

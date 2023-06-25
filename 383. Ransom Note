bool canConstruct(char * ransomNote, char * magazine){
    int letters[26] = {0};
    int i;

    for(i = 0; ransomNote[i] != NULL; i++) {
        letters[ransomNote[i] - 'a'] += 1;
    }
    for(i = 0; magazine[i] != NULL; i++) {
        letters[magazine[i] - 'a'] -= 1;
    }

    for(i = 0; i < 26; i++) {
        if(letters[i] > 0) {return false;}
    }

    return true;
}

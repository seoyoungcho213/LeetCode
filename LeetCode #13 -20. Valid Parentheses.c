bool isValid(char * s){
    char stack[10000];
    int index = -1;
    if(strlen(s) <= 1) {return false;} 

    for(int i = 0; s[i] != NULL; i++) {
        if(s[i] == '(' || s[i] == '{' || s[i] == '[') {
            index++;
            stack[index] = s[i];
        } 
        else if(s[i] == ')') {
            if(index == -1 || stack[index] != '(') {return false;}
            else {index--;}
        }
        else if(s[i] == '}') {
            if(index == -1 || stack[index] != '{') {return false;}
            else {index--;}
        }
        else if(s[i] == ']') {
            if(index == -1 || stack[index] != '[') {return false;}
            else {index--;}
        }
    }

    if(index != -1) {return false;}

    return true;
}

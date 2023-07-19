bool isPalindrome(int x){
    if(x < 0) {return false;}
    int size = 0;
    int x_copy = x;
    int y = 0;
    int digit = 0;

    for(size = 0; x_copy > 0; size++) {
        y += (x_copy%10) * pow(10,size);
        x_copy /= 10;
    }

    for(size--; size >= 0; size--) {
        digit = y / pow(10,size);
        if(digit != (x % 10)) {return false;}
        y -= digit * pow(10,size);
        x /= 10;
    }

    return true;
}

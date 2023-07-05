int candy(int* ratings, int ratingsSize){
    if(ratingsSize == 1) {return 1;}
    
    int* val = (int*)malloc(ratingsSize * sizeof(int)); //candy value
    int sum = 0;

    //initialize candy array
    for(int i = 0; i < ratingsSize; i++) {
        val[i] = 1;
    }

    //adjust candy value comparing with previous rating
    for(int i = 1; i < ratingsSize; i++) {
        if(ratings[i-1] < ratings[i]) {val[i] = val[i-1] + 1;}
    }

    //adjust candy value comparing with next rating
    for(int i = ratingsSize - 2; i >= 0; i--) {
        if(ratings[i+1] < ratings[i]) {
            if(val[i] <= val[i+1]+1) {val[i] = val[i+1] + 1;}
        }
    }

    //add up all candies
    for(int i = 0; i < ratingsSize; i++) {
        sum += val[i];
    }

    free(val);
    return sum;
}

int candy(int* ratings, int ratingsSize){
    if(ratingsSize == 1) {return 1;}

    int* candyNext = malloc(ratingsSize * sizeof(int));
    int* candy = malloc(ratingsSize * sizeof(int));
    int sum = 0;

    //initialize candy and flag
    for(int i = 0; i < ratingsSize; i++) {
        candy[i] = 1;
        candyNext[i] = 0;
    }

    //adjust candy based on ratings & set flag
    for(int i = 0; i < ratingsSize; i++) {
        if(i == 0) {
            if(ratings[i+1] < ratings[i]) {
                candy[i] = candy[i+1] + 1;
                candyNext[i] = 1;
            }
        }
        else if(i == ratingsSize - 1) {
            if(ratings[i-1] < ratings[i]) {candy[i] = candy[i-1] + 1;}
        }
        else {
            if(ratings[i+1] < ratings[i]) {
                candy[i] += 1;
                candyNext[i] = 1;
            }
            if(ratings[i-1] < ratings[i]) {candy[i] = candy[i-1] + 1;}
        }
    }

    //adjust candy based on flag
    for(int i = ratingsSize - 1; i >= 0; i--) {
        if(candyNext[i]) {
            if(candy[i+1] >= candy[i]) {candy[i] = candy[i+1] + 1;}
        }
    }

    //get sum of all candies
    for(int i = 0; i < ratingsSize; i++) {sum += candy[i];}

    return sum;
}

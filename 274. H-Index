int hIndex(int* citations, int citationsSize){
    int hindex = 0;
    int map[1000] = {0};

    for(int i = 0; i < citationsSize; i++) {
        for(int j = 0; j < citations[i] + 1; j++) {
            map[j]++;
        }
    }

    for(int i = 0; i < 1000; i++) {
        if(map[i] >= i) {hindex = i;}
    }

    return hindex;
}

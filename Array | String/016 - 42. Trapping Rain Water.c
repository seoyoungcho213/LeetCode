int trap(int* height, int heightSize) {
    int level = 0, water = 0;
    int lower;

    for(int i = heightSize-1; i > 0; i--) {
        //Due to pointer, heightSize(i) is keep changing.
        lower = *height < height[i] ? *height++ : height[i];
        if(level < lower) {level = lower;}
        water += level - lower;
    }

    return water;
}

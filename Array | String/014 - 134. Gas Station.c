int canCompleteCircuit(int* gas, int gasSize, int* cost, int costSize){
    int index = 0;
    int tank = 0;
    int sum = 0;

    for(int i = 0; i < costSize; i++) {
        sum += gas[i] - cost[i];
        tank += gas[i] - cost[i];

        if(tank < 0) {
            index = i+1;
            tank = 0;
        }
    }
    if(sum < 0) {return -1;}
    return index;
}

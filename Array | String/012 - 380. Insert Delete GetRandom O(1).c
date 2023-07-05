struct ll {
    int val;
    struct ll *next;
};

typedef struct {
    int size;
    struct ll **list;
} RandomizedSet;

void printSet(RandomizedSet* obj) {
    struct ll* head = obj->list[0];

    for(int i = 0; i < obj->size; i++) {
        printf("[%d] ", head->val);
        head = head->next;
    }
    printf("\n");
}

RandomizedSet* randomizedSetCreate() {
    struct ll* head;
    struct ll* tail;
    RandomizedSet* randSet = malloc(sizeof(RandomizedSet));
    randSet->size = 0;
    randSet->list = malloc(sizeof(struct ll*)); 

    head = malloc(sizeof(struct ll));
    head->val = 0;
    head->next = NULL;
    randSet->list[0] = head;

    return randSet;
}

bool randomizedSetInsert(RandomizedSet* obj, int val) {
    int i = 0;
    struct ll* head = obj->list[0];
    struct ll* temp;

    for(i = 0; i < obj->size; i++) {
        if(head->val == val) {
            return false;
        }
        head = head->next;
    }
    (obj->size)++;
    temp = malloc(sizeof(struct ll));
    temp->val = val;
    if(obj->size != 1) { temp->next = obj->list[0]; }
    else {temp->next = NULL;}

    obj->list[0] = temp;
    return true;
}

bool randomizedSetRemove(RandomizedSet* obj, int val) {
    if(obj->size == 0) {return false;}

    struct ll* temp = obj->list[0];
    struct ll* prev;

    if(temp->val == val) {
        obj->list[0] = temp->next;
        free(temp);
        (obj->size)--;
        return true;
    }

    while (temp != NULL && temp->val != val) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {return false;}

    prev->next = temp->next;
    free(temp);
    (obj->size)--;

    return true;
}

int randomizedSetGetRandom(RandomizedSet* obj) {
    if(obj->size == 1) {return obj->list[0]->val;}

    struct ll* head = obj->list[0];
    int out = head->val;

    for(int i = 0; i < rand() % obj->size; i++) {
        out = head->val;
        if(head->next != NULL){head = head->next;}
        else {head = obj->list[0];}
    }

    return out;
}

void randomizedSetFree(RandomizedSet* obj) {
    struct ll* head = obj->list[0];
    struct ll* temp;

    while (head != NULL) {
       temp = head;
       head = head->next;
       free(temp);
    }
}

/**
 * Your RandomizedSet struct will be instantiated and called as such:
 * RandomizedSet* obj = randomizedSetCreate();
 * bool param_1 = randomizedSetInsert(obj, val);
 
 * bool param_2 = randomizedSetRemove(obj, val);
 
 * int param_3 = randomizedSetGetRandom(obj);
 
 * randomizedSetFree(obj);
*/

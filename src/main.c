#include <stdio.h>
#include "hash_table.h"

int main(){
    ht_hash_table* ht = ht_new();
    ht_insert(ht, "key", "value");
    const char* res = ht_search(ht, "key");
    printf("%s\n", res);
    ht_del_hash_table(ht);
}
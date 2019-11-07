#include <stdio.h>

int main (int argc, char **argv) {
    char *items[] = {"boat", "car", "truck", "train"};
    int i;
    int index = scanf("%d",&i);
    printf("You selected %s\n", items[index]);
    return 0;
}

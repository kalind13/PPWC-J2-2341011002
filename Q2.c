#include <stdio.h>

int main() {
    int total_people, k;
    printf("Enter total number of people:\n ");
    scanf("%d", &total_people);
    
    printf("Enter kth:\n ");
    scanf("%d", &k);

    int safe_person = 0;   

    for (int i = 2; i <= total_people; i++) {
        safe_person = (safe_person + k) % i;
    }

    printf("saved one: %d\n", safe_person + 1);  
    return 0;
}
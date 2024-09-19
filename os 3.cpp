#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, i;
    printf("Enter the number of requests: ");
    scanf("%d", &n);
    int requests[n];

    printf("Enter the requests:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &requests[i]);
    }

    int head, seek_time = 0;
    printf("Enter the initial position of the head: ");
    scanf("%d", &head);

    int left = 0, right = 199;
    
    for (i = 0; i < n; i++) {
        if (requests[i] >= head) {
            seek_time += abs(head - requests[i]);
            head = requests[i];
        }
        else {
            seek_time += abs(head - right);
            head = right;
        }
    }

    // Move to the beginning of the disk
    seek_time += head;

    printf("Total seek time: %d\n", seek_time);
    return 0;
}

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

    int direction;
    printf("Enter the direction (0 for left, 1 for right): ");
    scanf("%d", &direction);

    int left = 0, right = 199;
    
    for (i = 0; i < n; i++) {
        if (direction == 0) {
            if (requests[i] >= left) {
                seek_time += abs(head - requests[i]);
                head = requests[i];
                left = head + 1;
            }
            else {
                seek_time += abs(head - left);
                head = left;
                direction = 1;
            }
        }
        else {
            if (requests[i] <= right) {
                seek_time += abs(head - requests[i]);
                head = requests[i];
                right = head - 1;
            }
            else {
                seek_time += abs(head - right);
                head = right;
                direction = 0;
            }
        }
    }

    printf("Total seek time: %d\n", seek_time);
    return 0;
}

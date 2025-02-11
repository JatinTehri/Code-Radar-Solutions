#include <stdio.h>
#include <string.h>

struct MovieTicket {
    char movie_name[10];
    char ticket_type[10];
    int ticket_price;
};

int main() {
    int N;
    scanf("%d", &N);
    struct MovieTicket M[N];
    int standard_price = 0;
    int premium_price = 0;
    int vip_price = 0;
    for (int i = 0; i < N; i++) {
        scanf("%s %s %d", M[i].movie_name, M[i].ticket_type, &M[i].ticket_price);
    }
    for (int i = 0; i < N; i++) {
         if (strcmp(M[i].ticket_type, "Standard") == 0) {
            standard_price += M[i].ticket_price;
         } else if (strcmp(M[i].ticket_type, "Premium") == 0) {
            premium_price += M[i].ticket_price;
         } else {
            vip_price += M[i].ticket_price;
         }
    }
    printf("Standard: %.2f, Premium: %.2f, VIP: %.2f", (float)(standard_price), (float)(premium_price), (float)(vip_price));
    return 0;
}

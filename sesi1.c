//Maden Tanta Ramadhanie 
//2602106894

#include <stdio.h>
#include <string.h>

int main() {
    int choice, quantity, stok, harga;
    char kodekue[6];
   		 int stokAB001 = 15; //set kode kue
    	 int stokAB002 = 15;
    	 int stokAB003 = 15;

		printf("| Cakecode |  \t|quantity|  \t|stok|\t\t|harga|\t\n");
		printf("-------------------------------------------------------\n");
		
    do {
        printf("Menu:\n");
        printf("1. Sell\n");
        printf("2. Add stok\n");
        printf("3. Exit\n");
        printf("Input choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Input Cake Code [5 chars]: ");
                scanf("%s", kodekue);
				 if (strcmp(kodekue, "AB001") == 0) {
                    stok = stokAB001;
                    harga = 34000;
                } else if (strcmp(kodekue, "AB002") == 0) {
                    stok = stokAB002;
                    harga = 43000;
                } else if (strcmp(kodekue, "AB003") == 0) {
                    stok = stokAB003;
                    harga = 41000;
                } else {
                    printf("The Cake Code doesn't exist --\n");
                    break;
                }
				printf("Input Quantity [0..%d]: ", stok);
                scanf("%d", &quantity);

                
                if (quantity > stok) {
                    printf("...The quantity of cake is not enough...\n");
                    printf("Input Quantity [0..%d]: ", stok);
                    scanf("%d", &quantity);
                }
				int totalharga = harga * quantity;
                printf("Total Price is : Rp %d,- x %d = Rp %d,-\n", harga, quantity, totalharga);
                break;
                
            case 2:
                printf("Input Cake Code [5 chars]: ");
                scanf("%s", kodekue);

                if (strcmp(kodekue, "AB001") == 0) {
                    printf("Input stok [0..13]: ");
                    scanf("%d", &stokAB001);
                } else if (strcmp(kodekue, "AB002") == 0) {
                    printf("Input stok [0..13]: ");
                    scanf("%d", &stokAB002);
                } else if (strcmp(kodekue, "AB003") == 0) {
                    printf("Input stok [0..13]: ");
                    scanf("%d", &stokAB003);
                } else {
                    printf("The Cake Code doesn't exist --\n");
                    break;
                }

                printf("Stock for Cake %s has been updated to %d\n", kodekue, stok);
                break;
            case 3:
                printf("Thank You\n");
                break;
            default:
                printf("Invalid choice. Please choose again.\n");
                break;
        }
    } while (choice != 3);

    return 0;
}

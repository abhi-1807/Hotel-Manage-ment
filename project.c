#include <stdio.h>
#include <string.h>

struct Customer {
    char name[100];
    int room_no;
    int days;
    float room_bill;
    float food_bill;
};

struct Customer cust;

void bookRoom() {
	int i;
    printf("Enter name: ");
    scanf("%s", cust.name);
    printf("1.Normal room\n");
    printf("2.Delux room\n");
    printf("3.Suite room\n");
    scanf("%d",&i);
    switch(i)
    {
    	case 1:{
    		printf("Enter room number: ");
    		scanf("%d", &cust.room_no);
    		printf("Enter number of days: ");
    		scanf("%d", &cust.days);
    		printf("one day price of normal room is 3000 Rs");
   	 		cust.room_bill = cust.days * 3000; 
    		break;
		}
		case 2:{
			printf("Enter room number: ");
    		scanf("%d", &cust.room_no);
    		printf("Enter number of days: ");
    		scanf("%d", &cust.days);
    		printf("one day price of delux room is 5000 Rs");
    		cust.room_bill = cust.days * 5000; 
			break;
		}
		case 3:{
			printf("Enter room number: ");
    		scanf("%d", &cust.room_no);
    		printf("Enter number of days: ");
    		scanf("%d", &cust.days);
    		printf("one day price of suite room is 10000 Rs");
    		cust.room_bill = cust.days * 10000; 
			break;
		}
    		
	}
}

void orderFood() {
    int choice, quantity;
    float total = 0;
    do {
        printf("\n--- Restaurant Menu ---\n");
        printf("1. Veg Burger - 180\n");
        printf("2. Paneer Tikka - 220\n");
        printf("3. Masala Dosa - 200\n");
        printf("4. Paneer Butter Masala - 260\n");
        printf("5. Kaju Curry - 270\n");
        printf("6. Malai Kofta - 250\n");
        printf("7. Veg Biryani - 300\n");
        printf("8. Fulka Roti - 25\n");
        printf("9. Tandoori Roti - 35\n");
        printf("10. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 9) {
            printf("Enter quantity: ");
            scanf("%d", &quantity);
        }

        switch(choice) {
            case 1: total += quantity * 180; break;
            case 2: total += quantity * 220; break;
            case 3: total += quantity * 200; break;
            case 4: total += quantity * 260; break;
            case 5: total += quantity * 270; break;
            case 6: total += quantity * 250; break;
            case 7: total += quantity * 300; break;
            case 8: total += quantity * 25; break;
            case 9: total += quantity * 35; break;
        }

    } while (choice != 10);

    cust.food_bill = total;
}
void showBill() {
    printf("\n===== BILL SUMMARY =====\n");
    printf("Name       : %s\n", cust.name);
    printf("Room No.   : %d\n", cust.room_no);
    printf("Days Stay  : %d\n", cust.days);
    printf("Room Bill  : %.2f\n", cust.room_bill);
    printf("Food Bill  : %.2f\n", cust.food_bill);
    printf("Total Bill : %.2f\n", cust.room_bill + cust.food_bill);
}

int main() {
    int option;
    do {
        printf("\n--- Hotel Management ---\n");
        printf("1. Book Room\n");
        printf("2. Order Food\n");
        printf("3. Show Bill\n");
        printf("4. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &option);
        if (option == 1) 
		{
			bookRoom();
		}
        else if (option == 2) orderFood();
        else if (option == 3) showBill();
    } while (option != 4);
    return 0;
}

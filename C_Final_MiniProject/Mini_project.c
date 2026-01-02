#include <stdio.h>
#include <string.h>

// --- Global Variables (The Menu) ---
// 5 items, max name length 20
char itemNames[5][20] = {
    "Veg Burger",
    "Cheese Pizza",
    "Masala Dosa",
    "Coffee",
    "Sandwich"
};

float itemPrices[5] = {
    120.00,
    250.00,
    150.00,
    100.00,
    80.00
};

// Array to store how many of each item the user buys
int orderQty[5] = {0, 0, 0, 0, 0}; 

// --- Function Prototypes ---
void showMenu();
void takeOrder();
void generateBill();

int main() {
    printf("\n=== SIMPLE RESTAURANT BILLING ===\n");
    
    // Step 1: Show what we have
    showMenu();

    // Step 2: Ask user what they want
    takeOrder();

    // Step 3: Print the final receipt
    generateBill();

    return 0;
}

// --- Function Definitions ---

void showMenu() {
    printf("\nID\tItem Name\tPrice\n");
    printf("--------------------------------\n");
    // Loop through our 5 items
    for(int i = 0; i < 5; i++) {
        // We use (i+1) as the ID so it starts at 1, not 0
        printf("%d\t%-15s\t%.2f\n", i+1, itemNames[i], itemPrices[i]);
    }
    printf("--------------------------------\n");
}

void takeOrder() {
    int choice = 0;
    int qty = 0;
    int keepOrdering = 1; // 1 means yes, 0 means no

    while(keepOrdering == 1) {
        printf("\nEnter Item ID (1-5) to order: ");
        scanf("%d", &choice);

        // check if ID is valid
        if(choice >= 1 && choice <= 5) {
            printf("Enter Quantity: ");
            scanf("%d", &qty);
            
            // Store quantity in our array (index is choice - 1)
            orderQty[choice - 1] += qty; 
            printf("Added to cart!\n");
        } else {
            printf("Invalid ID! Please try again.\n");
        }

        printf("Do you want to order more? (1 for Yes, 0 for No): ");
        scanf("%d", &keepOrdering);
    }
}

void generateBill() {
    float total = 0.0;
    float gst = 0.0;
    float discount = 0.0;
    float finalAmount = 0.0;

    printf("\n\n======= FINAL BILL =======\n");
    printf("%-15s %-5s %-10s\n", "Item", "Qty", "Amount");
    printf("--------------------------------\n");

    // Loop through orderQty to see what they bought
    for(int i = 0; i < 5; i++) {
        if(orderQty[i] > 0) {
            float cost = orderQty[i] * itemPrices[i];
            total = total + cost;
            printf("%-15s %-5d %.2f\n", itemNames[i], orderQty[i], cost);
        }
    }

    // --- LOGIC: Discount & GST ---
    
    // 10% Discount if bill is over 500
    if(total > 500) {
        discount = total * 0.10;
    }

    float taxableAmount = total - discount;
    
    // 18% GST
    gst = taxableAmount * 0.18;

    finalAmount = taxableAmount + gst;

    printf("--------------------------------\n");
    printf("Sub Total: \t%.2f\n", total);
    printf("Discount:  \t-%.2f\n", discount);
    printf("GST (18%%):  \t+%.2f\n", gst);
    printf("--------------------------------\n");
    printf("GRAND TOTAL:\t%.2f\n", finalAmount);
    printf("================================\n");
}
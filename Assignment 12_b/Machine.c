#include <stdio.h>

enum State {
    IDLE,
    COIN_INSERTED,
    DISPENSE,
    OUT_OF_STOCK
};

enum Command {
    INSERT_COIN = 1,
    SELECT_ITEM,
    RESTOCK,
    CANCEL
};

enum State nextState(enum State state, int command, int stock) {
    switch (state) {
        case IDLE:
            if (command == INSERT_COIN && stock > 0)
                return COIN_INSERTED;
            if (stock == 0)
                return OUT_OF_STOCK;
            break;

        case COIN_INSERTED:
            if (command == SELECT_ITEM && stock > 0)
                return DISPENSE;
            if (command == CANCEL)
                return IDLE;
            break;

        case DISPENSE:
            return IDLE;

        case OUT_OF_STOCK:
            if (command == RESTOCK && stock > 0)
                return IDLE;
            break;
    }

    return state;
}

void displayState(enum State state) {
    switch (state) {
        case IDLE:
            printf("Current State: IDLE\n");
            break;
        case COIN_INSERTED:
            printf("Current State: COIN INSERTED\n");
            break;
        case DISPENSE:
            printf("Current State: DISPENSE\n");
            break;
        case OUT_OF_STOCK:
            printf("Current State: OUT OF STOCK\n");
            break;
    }
}

int main() {
    enum State state = IDLE;
    int stock = 5;
    int command;

    while (1) {
        displayState(state);

        printf("\n1. Insert Coin\n");
        printf("2. Select Item\n");
        printf("3. Restock\n");
        printf("4. Cancel\n");
        printf("5. Exit\n");

        printf("Enter Command: ");
        scanf("%d", &command);

        if (command == 5)
            break;

        if (command < 1 || command > 4) {
            printf("Invalid Command\n");
            continue;
        }

        if (command == RESTOCK) {
            stock = stock + 5;
            printf("Stock Added. Total Stock: %d\n", stock);
        }

        enum State newState = nextState(state, command, stock);

        if (newState == state) {
            printf("Invalid Transition\n");
        } else {
            state = newState;

            if (state == DISPENSE) {
                printf("Item Dispensed Successfully\n");
                stock--;
                state = nextState(state, 0, stock);
            }

            displayState(state);
        }
    }

    printf("Vending Machine Closed\n");

    return 0;
}
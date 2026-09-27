#include <stdio.h>

int main() {
    int curr, prev;
    float units, bill = 0;

    printf("Enter Previous reading: ");
    scanf("%d", &prev);

    printf("Enter Current reading: ");
    scanf("%d", &curr);

    if (curr < prev) {
        curr = curr + 10000;
    }
    units = curr - prev;

    if (units > 400) {
        bill = (100 * 2.0) + (200 * 3.50) + (units - 400) * 5.0;
    }
    else if (units > 200) {
        bill = (100 * 2.0) + (units - 200) * 3.50;
    }
    else if (units > 100) {
        bill = (units - 100) * 2.0;
    }
    else {
        bill = 0;
    }
    
    if (units > 500) {
        bill = bill + (bill * 0.15);
    }

    if (units < 0) {
        printf("Invalid Reading\n");
        return 0;
    }

    printf("Total Consumed Units : %.1f\n", units);
    printf("Total Bill : %.2f\n", bill);

    return 0;
}
```[cite: 1]

---

### Task 2: Grandma's Multi-Level Medicine Dosage
```c
#include <stdio.h>

int main() {
    int age, fever;
    float weight;

    printf("Enter Your Age: ");
    scanf("%d", &age);

    printf("ENter Weight : ");
    scanf("%f", &weight);

    printf("have you fever (1-yes / 0-no): ");
    scanf("%d", &fever);

    if (age < 2) {
        printf("Consult Doctor\n");
    }
    else if (age <= 12) {
        if (weight < 20) {
            if (fever && weight < 15) {
                printf("Consult Doctor\n");
            } else {
                printf("2.5 ml\n");
            }
        } else {
            printf("5 ml\n");
        }
    }
    else {
        if (fever || weight > 70) {
            printf("10 ml\n");
        } else {
            printf("7.5 ml\n");
        }
    }

    return 0;
}
```[cite: 1]

---

### Task 3: The ATM That Judges You
```c
#include <stdio.h>

int main() {
    int acc, trans, perm = 0;

    printf("Enter Account Type-- 1=Savings, 2=Current, 3=Salary: ");
    scanf("%d", &acc);

    printf("Enter Transaction Type-- 1=Withdraw, 2=Balance Check, 3=Mini Statement: ");
    scanf("%d", &trans);

    switch (acc) {
        case 1:
            perm = 3;
            break;

        case 2:
            perm = 7;
            break;

        case 3:
            perm = 5;
            break;

        default:
            printf("Invalid Selection\n");
            return 0;
    }

    switch (trans) {
        case 1:
            if (perm & (1 << 0)) {
                printf("Transaction Approved\n");
            } else {
                printf("Transaction Denied for tAccount Type\n");
            }
            break;

        case 2:
            if (perm & (1 << 1)) {
                printf("Transaction Approved\n");
            } else {
                printf("Transaction Denied for this Account Type\n");
            }
            break;

        case 3:
            if (perm & (1 << 2)) {
                printf("Approved\n");
            } else {
                printf("Transaction \n");
            }
            break;

        default:
            printf("Invalid Selection\n");
            break;
    }

    return 0;
}
```[cite: 1]

---

### Task 4: The College Attendance-cum-Marks Drama
```c
#include <stdio.h>

int main() {
    float attendance;
    int marks, unapproved;

    printf("Enter Your -- Attendance | MArks | Unapproved leaves ");

    scanf("%f %d %d", &attendance, &marks, &unapproved);

    if (marks < 20) {
        printf("Debarred\n");
    }
    else if (attendance >= 75 && marks >= 30) {
        printf("Eligible\n");
    }
    else if (attendance >= 65 && attendance <= 74 && marks >= 40) {
        if (unapproved > 2) {
            printf("Debarred\n");
        } else {
            printf("Eligible (Grace Attendance)\n");
        }
    }
    else {
        printf("Not Eligible\n");
    }

    return 0;
}
```[cite: 1]

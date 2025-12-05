//Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>
#include <string.h>

int main() {
    char date[20];
    char day[3], month[3], year[5];
    char *monthNames[] = {
        "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };

    printf("Enter date in dd/mm/yyyy format: ");
    scanf("%s", date);

    
    strncpy(day, date, 2);
    day[2] = '\0';
    strncpy(month, date + 3, 2);
    month[2] = '\0';
    strcpy(year, date + 6);

    
    int m = (month[0] - '0') * 10 + (month[1] - '0');

    if (m < 1 || m > 12) {
        printf("Invalid month!\n");
        return 0;
    }

    printf("Date in new format: %s-%s-%s\n", day, monthNames[m - 1], year);

    return 0;
}

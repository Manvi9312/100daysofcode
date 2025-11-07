//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

#include <stdio.h>
#include <string.h>

void change_date_format(char original_date[], char formatted_date[]) {
    char months[12][4] = {
        "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };
    
    char day_str[3];
    char month_str[3];
    char year_str[5];
    int month;

    day_str[0] = original_date[0];
    day_str[1] = original_date[1];
    day_str[2] = '\0';

    month_str[0] = original_date[3];
    month_str[1] = original_date[4];
    month_str[2] = '\0';

    year_str[0] = original_date[6];
    year_str[1] = original_date[7];
    year_str[2] = original_date[8];
    year_str[3] = original_date[9];
    year_str[4] = '\0';

    sscanf(month_str, "%d", &month);
    
    sprintf(formatted_date, "%s-%s-%s", day_str, months[month - 1], year_str);
}

int main() {
    char input_date[] = "15/04/2025";
    char output_date[20];

    change_date_format(input_date, output_date);

    printf("Input 1:\n%s\n", input_date);
    printf("Output 1:\n%s\n", output_date);

    return 0;
}

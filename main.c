#include <stdio.h>

char x1[] = "<html><head><title>";
char x2[] = "</title><link rel=\"stylesheet\" href=\"style.css\"/></head><body><table class=\"center\"><tr><td>";
char x3[] = "</td></tr></table></body></html>";

int main()
{
    FILE *home = fopen("index.html", "w");
    FILE *style = fopen("style.css", "w");
    char title[20], body[400], bColor[20];
    printf("Enter the page title: ");
    scanf("%[^\n]", title);
    printf("Enter the body: ");
    scanf("%*c%[^\n]", body);
    fprintf(home, "%s%s%s%s%s", x1, title, x2, body, x3);

    printf("Enter the background color: ");
    scanf("%s", bColor);
    fprintf(style, "body{background-color: %s;} table.center{ margin-left: auto; margin-right: auto;}", bColor);
    return 0;
}


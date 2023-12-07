#include <stdio.h>
int main()
{
    FILE *fp;                   // Creating File Pointer
    char name[10];
    int roll;

    // Writing into File
    fp = fopen("myfile.txt", "w");  // Opening File in Write Mode
    printf("Enter Name: ");
    scanf("%s", name);
    printf("Enter Roll: ");
    scanf("%d", &roll);

    fprintf(fp, "%s %d", name, roll); // Writing

    fclose(fp);                     // Closing File

    // Reading from File
    fp = fopen("myfile.txt", "r");  // Opening File in Read Mode
    // Exit if could not open file
    if (fp == NULL)
      return 0;
    fscanf(fp, "%s %d", name, &roll);  // Reading
    printf("Name: %s \nRoll: %d", name, roll);
    fclose(fp);                 // Closing File

}

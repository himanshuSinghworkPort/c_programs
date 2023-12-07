#include <stdio.h>
int main()
{
    FILE *fp;                   // Creating File Pointer
    char str[50];
    int n;

    fp = fopen("myfile.txt", "r+");  // Opening File in Read & Write Mode
    // Exit if could not open file
    if (fp == NULL)
      return 0;

    fgets(str, 50, fp);
    printf("Old Content: %s", str);

    fseek(fp, 14, SEEK_SET);        // Move from beginning to 24 char

    fputs("GeekyShows Wala", fp);

    rewind(fp);                     // Set at the beginning

    fgets(str, 50, fp);
    printf("\nNew Content: %s", str);

    n = ftell(fp);
    printf("\nTotal Size of File: %d bytes", n);

    fclose(fp);                     // Closing File

}

#include <stdio.h>
int main()
{
s
    // Example 1
    FILE *fp;                   // Creating File Pointer
    char ch = 'A';

    // Writing into File
    fp = fopen("myfile.txt", "w");  // Opening File in Write Mode

    fputc(ch, fp);              // Writing Character into File
    fclose(fp);                 // Closing File

    // Reading from File
    fp = fopen("myfile.txt", "r");  // Opening File in Read Mode
    // Exit if could not open file
    if (fp == NULL)
      return 0;
    ch=fgetc(fp);               // Reading Character into File
    printf("%c", ch);
    fclose(fp);                 // Closing File


    /*
    // Example 2 - Input from user
    FILE *fp;                   // Creating File Pointer
    char ch;

    // Writing into File
    fp = fopen("myfile.txt", "w");  // Opening File in Write Mode

    printf("Write Your Message: \n");
    while((ch=getchar()) != EOF)
    {
        fputc(ch, fp);
    }

    fclose(fp);                 // Closing File

    // Reading from File
    fp = fopen("myfile.txt", "r");  // Opening File in Read Mode

    // Exit if could not open file
    if (fp == NULL)
      return 0;

    printf("\nYour Message: \n");
    while((ch=fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }

    fclose(fp);                 // Closing File
    */

}

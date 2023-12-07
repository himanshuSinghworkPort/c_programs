#include <stdio.h>
int main()
{
    FILE *fp;                   // Creating File Pointer
    char str[10] = "Rajesh";
    char name[10];
    // Writing into File
    fp = fopen("myfile.txt", "w");  // Opening File in Write Mode
    fputs(str, fp);              // Writing String into File
    fclose(fp);                 // Closing File

    // Reading from File
    fp = fopen("myfile.txt", "r");  // Opening File in Read Mode
    // Exit if could not open file
    if (fp == NULL)
      return 0;
    fgets(name, 4, fp);               // Reading Character into File
    printf("%s", name);
    fclose(fp);                 // Closing File

}

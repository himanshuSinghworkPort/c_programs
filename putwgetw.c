#include <stdio.h>
int main()
{
    FILE *fp;                   // Creating File Pointer
    int num, n = 10;

    // Writing into File
    fp = fopen("myfile.txt", "w");  // Opening File in Write Mode
    putw(n, fp);              // Writing Integer into File
    fclose(fp);                 // Closing File

    // Reading from File
    fp = fopen("myfile.txt", "r");  // Opening File in Read Mode
    // Exit if could not open file
    if (fp == NULL)
      return 0;
    num = getw(fp);               // Reading Integer into File
    printf("%d", num);
    fclose(fp);                 // Closing File

}


#include <stdio.h>
#include <stdlib.h> // exit()
#include <io.h>
#include <errno.h>
#include <string.h> 


int main() 
{
    char* buffer;
    int size;
    int count;
    struct _finddata_t c_file;
    intptr_t hFile;
    
    hFile = _findfirst("C:\\Users\\PKNU\\Documents\\*.txt", &c_file);
    while (1)
    {


        if (hFile == -1)
        {
            printf(":: 파일이 없음 ::\n");

        }
        else
        {
            do
            {
                char path[100] = "C:\\Users\\PKNU\\Documents\\";
                strcat(path, c_file.name);
                FILE* fp = fopen(path, "r");
                fseek(fp, 0, SEEK_END);
                size = ftell(fp);
                buffer = malloc(size + 1);
                memset(buffer, 0, size + 1);
                fseek(fp, 0, SEEK_SET);
                fread(buffer, size, 1, fp);
                printf("%s\n", buffer);
                fclose(fp);
                free(buffer);
                printf("___________________________\n");
            } while (_findnext(hFile, &c_file) == 0);
            _findclose(hFile);

        }

    }
    return 0;
}
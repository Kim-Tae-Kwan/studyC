
#include <stdio.h>
#include <stdlib.h> // exit()
#include <io.h>
#include <errno.h>
#include <string.h> 
void wr(char ch[]);



int main() 
{
    int count;
    struct _finddata_t c_file;
    intptr_t hFile;
    char ary[][80] = {0};
    
    //hFile = _findfirst("C:\\Users\\kyj\\Documents\\*.txt", &c_file);
    while (1)
    {
        int i = 1;
        int j = 0;
        hFile = _findfirst("C:\\Users\\kyj\\Documents\\*.txt", &c_file);

        if (hFile == -1)
        {
            printf(":: 파일이 없음 ::\n");
        }
        else
        {
            do
            {
                ary[i][80] = c_file.name;
                
                for (j; j < i; j++)
                {
                    if (ary[j][80] == c_file.name)
                        continue;
                }
                wr(c_file.name);
                
                i++;

            } while (_findnext(hFile, &c_file) == 0);
            _findclose(hFile);

        }

    }
    return 0;
}

void wr(char ch[])
{
    int size;
    char* buffer;
    char path[100] = "C:\\Users\\kyj\\Documents\\";


    strcat(path, ch);
    FILE* fp = fopen(path, "r");
   // printf("%u\n", fp);
    fseek(fp, 0, SEEK_END);
    //printf("%u\n", fp);
    size = ftell(fp);
    buffer = malloc(size + 1);
    memset(buffer, 0, size + 1);
    fseek(fp, 0, SEEK_SET);
    fread(buffer, size, 1, fp);
    printf("%s\n", buffer);
    fclose(fp);
    free(buffer);
    printf("___________________________\n");
}

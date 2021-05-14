#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Word {
    char* str; 
    int index; 
};


struct DupArray {
    struct Word* array; 
    int size; 
};


struct DupArray* createDupArray(char* str[], int size)
{
    
    struct DupArray* dupArray = (struct DupArray*)malloc(sizeof(struct DupArray));
    dupArray->size = size;
    dupArray->array = (struct Word*)malloc(dupArray->size * sizeof(struct Word));

    
    int i;
    for (i = 0; i < size; ++i) {
        dupArray->array[i].index = i;
        dupArray->array[i].str = (char*)malloc(strlen(str[i]) + 1);
        strcpy(dupArray->array[i].str, str[i]);
    }

    return dupArray;
}


int compChar(const void* a, const void* b)
{
    return (char)a - (char)b;
}


int compStr(const void* a, const void* b)
{
    struct Word* a1 = (struct Word*)a;
    struct Word* b1 = (struct Word*)b;
    return strcmp(a1->str, b1->str);
}


void printAnagramsTogether(char* wordArr[], int size)
{
    
    struct DupArray* dupArray = createDupArray(wordArr, size);

   
    int i;
    for (i = 0; i < size; ++i)
        qsort(dupArray->array[i].str,
            strlen(dupArray->array[i].str), sizeof(char), compChar);

    
    qsort(dupArray->array, size, sizeof(dupArray->array[0]), compStr);

    
    for (i = 0; i < size; ++i)
        printf("%s ", wordArr[dupArray->array[i].index]);
}


int main()
{
    char* wordArr[] = { "cat", "dog", "tac", "god", "act" };
    int size = sizeof(wordArr) / sizeof(wordArr[0]);
    printAnagramsTogether(wordArr, size);
    return 0;

#include <stdio.h>
#include <string.h>



int main() {

    char S[1000];
    fgets(S, sizeof(S), stdin);

    char minWord[200], word[200] ;
    int minLength = 200, wordLength = 0, i = 0;

    //lap qua tung phan tu o trong mang S
    while (S[i] != '\0')
    {
        char character = S[i];

        if (character != ' ' && character != '\n')
        {
            //them ki tu vao trong word
            word[wordLength++] = character;
        }else if (wordLength > 0) {
            word[wordLength] = '\0';

            //Neu la tu dau tien hoac tu ngan hon tu hien tai. cap nhat
            if (wordLength < minLength)
            {
                minLength = wordLength;
                strcpy(minWord, word);
            }

            wordLength = 0;// reset de doc tu moi
        }
        //update gia tri
        i++;
    }

    //neu tu cuoi cung khong ket thuc bang dau cach, xy ly no
    if (wordLength > 0)
    {
        word[wordLength ] = '\0';
        if (wordLength < minLength)
        {
            strcpy(minWord, word);
        }
        
    }
        
    

}
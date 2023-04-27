#include <stdio.h>
#include <string.h>
void search(char* pat, char* txt)
{
int M = strlen(pat);
int N = strlen(txt);
for (int i = 0; i <= N - M; i++) {
int j;
for (j = 0; j < M; j++)
if (txt[i + j] != pat[j])
break;
if (j == M)
printf("Pattern found at index %d \n", i);
}
}
int main()
{
char txt[] = "BAAAACAADAABAAABAA";
char pat[] = "AABA";
search(pat, txt);
return 0;
}
//
int main()
{
 char txt[] = "MYNAMEISSANIYASANI";
 char pat[] = "ISSANI";
 search(pat, txt);
 return 0;
}


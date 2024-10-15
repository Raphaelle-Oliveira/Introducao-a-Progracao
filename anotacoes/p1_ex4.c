#include <stdio.h>
#include <string.h>

int main()
{
    char v1[1000], v2[1000];

    scanf("%[^\n]", v1);
    scanf(" %[^\n]", v2);

    int len_v1 = strlen(v1);
    int len_v2 = strlen(v2);
    char aux;
    int aoi=len_v1;

    for (int i = 0; i < len_v1; i++)
    {
        if (v1[i] == ' ')
        {
            for (int j = i; j < len_v1; j++)
            {
                v1[j] = v1[j + 1];
                aoi -= 1;
            }
        }
        if(v1[i]>='A'&&v1[i]<='Z'){
            v1[i]+=32;
        }

    }
    v1[aoi]='\0';
    int oia=len_v2;

    for (int i = 0; i < len_v2; i++)
    {
        if (v2[i] == ' ')
        {
            for (int j = i; j < len_v2; j++)
            {
                v2[j] = v2[j + 1];
                aoi -= 1;
            }
        }
        if(v2[i]>='A'&&v2[i]<='Z'){
            v2[i]+=32;
        }
    }
    v2[oia]='\0';

    printf("%s\n%s",v1,v2);

    if (oia != aoi){
        printf("NAO");
        return 0;
    } 

    for(int i=0;i<oia;i++){
        for(int j=0;j<oia;j++){
            if(v1[i]==v2[j]){
                v2[j]='\0';
            }
        }
    }
    for(int i=0;i<oia;i++){
        if(v2[i]!='\0'){
            printf("Caractere diferente de \\0: %c", v2[i]);
            return 0;
        }
    }
    printf("SIM\n");



    return 0;
}
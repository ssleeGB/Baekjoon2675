//
//  main.c
//  baekjoon2675
//
//  Created by 이승섭 on 2018. 12. 27..
//  Copyright © 2018년 이승섭. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    int T, R;
    char S[20];
    
    FILE *fp = fopen("input.txt","r");
    
    fscanf(fp, "%d", &T);
    printf("%d \n\n", T);
    
    for(int i = 0; i < T; i++)
    {
        fscanf(fp, "%d" "%s", &R, &S);
        printf("%d " "%s \n", R, S);
        
        for(int j = 0; S[j] != '\0'; j++)
        {
            for(int k = 0; k < R; k++)
            {
                printf("%c", S[j]);
            }
        }
        
        printf("\n\n");
        
    }
    
    printf("\n");
    
    fclose(fp);
    
    return 0;
}

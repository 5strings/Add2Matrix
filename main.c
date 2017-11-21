//
//  main.c
//  TwoMatrix
//
//  Created by Eun Jae Lee on 21/11/17.
//  Copyright © 2017 Eun Jae Lee. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    int a[3][3], b[3][3], c[3][3], i,k;
    
    printf("Enter element of 1st 3x3 matrix \n");
    
    for (i=0; i<3; i++) {
        for (k=0; k<3; k++) {
            scanf("%d", &a[i][k]);
        }
    }
    
    printf("Enter element of 2nd 3x3 matrix \n");
    
    for (i=0; i<3; i++) {
        for (k=0; k<3; k++) {
            scanf("%d", &b[i][k]);
        }
    }
    
    for (i=0; i<3; i++) {
        for (k=0; k<3; k++) {
            c[i][k] = a[i][k] + b[i][k];
            
            printf("%d \t", c[i][k]);
        }
        
        printf("\n");
    }
    
   // getchar();
    
    return 0;
}

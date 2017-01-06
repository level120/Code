//
//  main.cpp
//  c_test
//
//  Created by  Gusam Park on 2016. 12. 25..
//  Copyright © 2016년  Gusam Park. All rights reserved.
//

#include <iostream>

int count = 1;
int save[1000][1000];

int main(int argc, const char * argv[]) {
    // insert code here...
    int i, j, in, num, lim, tmp, x, y;
    scanf("%d %d", &in, &num);
    i = j = in / 2;
    lim = in * in;
    tmp = 1;
    
    save[i][j] = count++;
    while (true) {
        for (int k=0; k<tmp; k++) {
            if (count>lim) {
                break;
            }
            save[--i][j] = count++;
            if ((count-1)==num) {
                x=i; y=j;
            }
        }
        if (count>lim) {
            break;
        }
        for (int k=0; k<tmp; k++) {
            save[i][++j] = count++;
            if ((count-1)==num) {
                x=i; y=j;
            }
        }
        tmp++;
        for (int k=0; k<tmp; k++) {
            save[++i][j] = count++;
            if ((count-1)==num) {
                x=i; y=j;
            }
        }
        for (int k=0; k<tmp; k++) {
            save[i][--j] = count++;
            if ((count-1)==num) {
                x=i; y=j;
            }
        }
        tmp++;
    }
    
    for (int m=0; m<in; m++) {
        for (int n=0; n<in; n++) {
            printf("%d%c", save[m][n], n!=(in-1)?' ':'\n');
        }
    }
    
    printf("%d %d", x+1, y+1);
    
    return 0;
}

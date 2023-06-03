//
//  main.c
//  예제정리5
//
//  Created by 최우진 on 2023/05/31.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int gugu[9][9];//2차원 배열 선언
    
    for (int i=0; i<9; i++) {
        for(int k=0; k<9; k++){
            gugu[i][k] = (i+1)*(k+1);//배열에 구구단 결과값 저장
        }
    }
    for (int i=0; i<9; i++) {
        for(int k=0; k<9; k++){
            printf("%dx%d=%2d ",k+1,i+1,gugu[i][k]);//구구단 출력
        }
        printf("\n");
    }
    
    return 0;
}

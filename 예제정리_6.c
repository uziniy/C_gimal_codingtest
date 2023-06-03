//
//  main.c
//  예제정리6
//
//  Created by 최우진 on 2023/05/31.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int sub[5][5]={0,}; //총합 넣는 부분에 trash값 안들어가게 해야하니깐 0으로 배열 전체 초기화
    
    
    for (int i=0; i<4; i++) {//2차원 배열이니깐 중첩for문 돌려서 입력 받아주고
        for (int j=0; j<4; j++) {
            printf("%d,%d 배열의 숫자를 입력하세요 : ",i,j);
            scanf("%d",&sub[i][j]);
            sub[i][4]+=sub[i][j]; //가로부터 총합 계산
        }
        
    }
    for (int l=0; l<4; l++) {//세로 총합 계산
        for (int m=0; m<4; m++) {
            sub[4][l]+=sub[m][l];
        }
    }
                
    
    
    for (int i=0; i<5; i++) {//입력 완료 됐으니깐 출력
        for (int j=0; j<5; j++) {
            printf("%2d ",sub[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

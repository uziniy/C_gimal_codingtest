//
//  main.c
//  예제정리7
//
//  Created by 최우진 on 2023/06/02.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    char ss[100],tt[100];//입력받을때 쓸 배열일아 출력할때 쓸 배열 선언
    
    printf("문자열 입력 : ");//입력받고
    gets(ss);
    
    for (int i=0; i<strlen(ss); i++) {
        tt[i]=ss[strlen(ss)-i-1];//반대로 넣어주는데 -1 꼭 해줘야함 5개면 5번째 배열을 4니깐
    }
    for (int j=0; j<strlen(ss); j++) {
        printf("%c",tt[j]);//출력
    }
    printf("\n");
    
    

    return 0;
}

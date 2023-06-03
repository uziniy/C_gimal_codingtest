//
//  main.c
//  예제정리1번
//
//  Created by 최우진 on 2023/05/31.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    char ss[100];
    char tt[100];
    int count;
    
    printf("문자열을 입력하세요 : ");
    scanf("%s",ss);
    
    count = strlen(ss);
    for (int i=0; i<count; i++) {
        tt[i]=ss[count-(i+1)];
    }
    tt[count]='\0';
    
    printf("내용을 거꾸로 출력 ==> %s \n",tt);
    
    return 0;
}

//
//  main.c
//  예제정리4
//
//  Created by 최우진 on 2023/05/31.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    char ff[100],ss[100]; //입력받을 두 배열을 선언
    int a;//비교한 값을 저장하는 변수를 선언
    
    printf("첫 번째 : ");
    gets(ff); //첫 번째 문자열 입력받고
    printf("두 번째 : ");
    gets(ss); //두 번째 문자열 입력 받음
    
    a = strcmp(ff,ss);//두 배열이 같으면 0을 아니면 ff-ss 숫자를 a에 저장
    
    if(a!=0){//a가 0이 아니면 즉 두 숫자가 다르면
        strcat(ff,ss); //합친다
    }
    
    printf("%s",ff);
    
    return 0;
}

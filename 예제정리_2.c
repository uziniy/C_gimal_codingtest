//
//  main.c
//  예제정리2
//
//  Created by 최우진 on 2023/05/31.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    char str[100];//입력받을 배열 선언
    char ch1, ch2;//기존문자와 새로운 문자를 입력받을 문자형 변수 선언
    
    printf("여러 글자를 입력 : ");
    gets(str);//배열에 입력을 받고
    
    printf("기존 문자와 새로운 문자 : ");
    scanf("%c  %c", &ch1,&ch2);//바꾸고 싶은 기존 문자와 새로운 문자 입력 받은 후
    
    for (int i=0; i<strlen(str); i++) {//길이 뽑아서 for문 돌리고
        if(str[i]==ch1){//배열에 들어있는 문자와 기존 문자가 같을때
            str[i]=ch2;//그 배열에 새로운 문자로 초기화
        }
    }
    
    printf("변환된 결과 ==>%s \n",str); //바뀐 결과 출력
    //여기서는 널문자 안넣어도됨 새로운 배열을 만든게 아니니깐
    return 0;
}

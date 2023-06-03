//
//  main.c
//  예제정리_2번
//
//  Created by 최우진 on 2023/05/31.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    char in[50], out[50];//입력받는 배열과, 출력할때 사용할 배열을 만들고
    int diff = 'a'-'A'; //소문자와 대문자의 아스키코드값의 차이를 diff 변수에 저장
    int len;
    
    printf("문자 입력 : ");
    gets(in);
    len=strlen(in); //입력받은 문자의 길이를 측정하고
    
    for (int i=0; i<len; i++) {//for문을 돌린다.
        if(('A'<=in[i])&&(in[i]<='Z')){//대문자라면 아스키코드 차이값을 더해서 소문자로 만들어주고
            out[i]=in[i]+diff;
        }
        else if (('a'<=in[i])&&(in[i]<='z')){//소문자라면 아스키코드 차이값을 빼서 대문자로 만든다.
            out[i]=in[i]-diff;
        }
        else{//둘다 아니면 숫자니깐 그냥 넣어준다.
            out[i]=in[i];
        }
    }
    out[len]='\0';//마지막 배열에 널문자 넣어준다.
    
    printf("변환된 문자 =>%s \n",out); //변환된 문자 출력
    
    return 0;
}

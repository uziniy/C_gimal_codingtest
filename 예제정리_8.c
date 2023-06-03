//
//  main.c
//  예제정리8
//
//  Created by 최우진 on 2023/06/03.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int s[10]={1,0,3,2,5,4,7,6,9,8};//문제에 나온 숫자들 배열에 대입
    int tmp;//숫자 바꿀때 사용할 변수 선언
    printf("정렬 전 배열 s ==> ");
    for (int i=0; i<10; i++) {//보여주기신 배열 출력
        printf("%d ",s[i]);
    }
    int *p;//포인터 변수 선언
    p=s;//포인터에 배열 주소 저장
    printf("\n");
    printf("정렬 후 배열 s ==> ");
    
    for (int i=0; i<9; i++) {//앞자리
        for (int k=i+1; k<10; k++) {//뒷자리
            if(*(p+i)>*(p+k)){//앞자리가 뒷자리보다 크다면
                tmp = *(p+k);//뒷자리 변수에 저장해두고
                *(p+k)=*(p+i);//앞자리에 뒷자리 넣고
                *(p+i)=tmp;//뒷자리에 앞자리 넣어
            }
        }
    }
    for (int m=0; m<10; m++) {//그리고 출력
        printf("%d ",*(p+m));
    }
    
    return 0;
}

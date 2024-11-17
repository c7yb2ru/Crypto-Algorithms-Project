#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

// 암호화 함수
void Encrypto(char* Plain_txt, char key, int key1) {
    size_t len = strlen(Plain_txt);

    for (size_t i = 0; i < len; i++) {
        Plain_txt[i] = Plain_txt[i] ^ (key * key1); // XOR 기반 암호화
    }
}

int main() {
    char Plain_txt[50];
    char key;
    int key1;

    // 평문 입력
    printf("Plain Text: ");
    scanf("%s", Plain_txt);

    // 암호화 키 입력
    printf("Input key (character): ");
    scanf(" %c", &key); // 단일 문자 입력

    printf("Input key1 (integer): ");
    scanf("%d", &key1); // 정수 입력


    Encrypto(Plain_txt, key, key1);
    printf("Encrypted Text: %s\n", Plain_txt);

    
    Encrypto(Plain_txt, key, key1);
    printf("Decrypted Text: %s\n", Plain_txt);

    return 0;
}

/*
2) Escreva um programa que repita a leitura de uma senha até que ela seja válida. Para cada leitura
de senha incorreta informada, escrever a mensagem “Senha Invalida”. Quando a senha for
informada corretamente deve ser impressa a mensagem “Acesso Permitido” e o programa deve ser
encerrado. Considere que a senha correta é o valor 123456.
*/
#include <stdio.h>
int main (){
    int a;
    int a0=123456;

    printf("Digite a senha de 6 digitos: ");
    scanf("%d",&a);
    while (a!=a0)
    {
        printf("\nSenha incorreta, digite outra senha.\n");
        scanf("%d",&a);
    }
    
    printf("\nsenha correta!\n");
    

}                                                                                                                                                                                                                                                                                                                                                                                                              
///�n�F�Ѧr��P�}�C�����Y
#include <stdio.h>
int main()
{
    printf("�п�J10�Ӧr���A���঳�Ů�b�̭�:\n");
    char line[30];
    scanf("%s", line);
    printf("�o�Ӧr�O:%s �̭����r,���O�O:\n");

    for(int i=0;i<11;i++){
        printf("��%d�Ӧr��: %c �������Ʀr�O:%d\n", i, line[i], line[i]);
    }
}

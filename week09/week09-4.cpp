#include <stdio.h>
#include <string.h> ///�n�ϥΡu�r�ꪺ�禡�v
int main()
{
    char line[100]; ///�i��100�Ӧr��,�ܪ�
    printf("�п�J�@��r��,���n���Ů�,�̫���浲����J");
    scanf("%s", line);

    int N = strlen(line); ///�d�X�r����� string lengh
    printf("�r�ꪺ���׬O:%d\n", N);
    ///strcpy(a, "Hello"); �r����� string copy
    ///strcat(a, b); �r�굲�X ��k��b ���쥪��a���᭱ string concatenate
    ///strcmp(a, b); �r���� (�v�r�����,�ݽ֤���j) string compare

}

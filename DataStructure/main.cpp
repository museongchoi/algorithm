#include "class.h"

int main()
{
    // �������� �ֽ� ǥ�� �������� ���� �����͸� �迭�� ���� ��
    element class1[5] = { {134,88,65},{125,95,90},{145,70,55},{128,75,50},{129,60,60} };
    element class2[5] = { {124,78,55},{135,65,70},{147,80,85},{115,95,90},{144,90,80} };

    // �� ���Ḯ��Ʈ ���������� �ʱ�ȭ 
    Header header1; header1.head = NULL;
    Header header2; header2.head = NULL;
    Header header3; header3.head = NULL;
    int i;
    
    // �� �迭�� ��Ҹ� �Ѱ��־� ���� ���Ḯ��Ʈ�� �����
    for (i = 0; i < 5; i++) {
        sortClass(&header1, class1[i]);
        sortClass(&header2, class2[i]);
    }

    // ��� ��ºκ�
    puts("class1"); print_list(header1);
    puts("");
    puts("class2"); print_list(header2);
    //(2)
    puts("");
    combine(&header3, header1, header2);
    puts("combined class"); print_list(header3);
    puts("");

    //����
    deleteNode(&header3, 135);
    puts("new combined class");  print_list(header3);
    puts("");

    return 0;
}
/*ͷ�ļ�*/
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <windows.h>                         //����dos����
                                             /*�궨��*/
#define MAXIMUS 15                           //�������̴�С
                                             /*��������*/
int p[MAXIMUS][MAXIMUS];                     //�洢�Ծ���Ϣ
char buff[MAXIMUS * 2 + 1][MAXIMUS * 4 + 3]; //���������
int Cx, Cy;                                  //��ǰ���λ��
int Now;                                     //��ǰ���ӵ���ң�1����ڣ�2�����
int wl, wp;                                  //��ǰд�뻺����������������λ��
char *showText;                              //������������ʾ��������Ϣ
int count;                                   //�غ���
void explation();
void gotoxy(int x, int y);
int color(int c);
/**
 * ���ù��λ��
 */
void gotoxy(int x, int y)
{
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
/**
 * ������ɫ����      �˺����ľ����ԣ�1��ֻ��Windowsϵͳ��ʹ��   2�����ܸı䱳����ɫ
 */
int color(int c)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c); //����������ɫ
    return 0;
}
/**
 * ��ʼ����
 */
void welcometogame()
{
    int n;
    int i, j = 1;
    gotoxy(23, 2);
    color(13);
    printf("�� �� �� �� Ϸ");
    color(15);                //��ɫ�߿�
    for (i = 6; i <= 12; i++) //������±߿�
    {
        for (j = 7; j <= 54; j++) //������ұ߿�
        {
            gotoxy(j, i);
            if (i == 6 || i == 12)
            {
                printf("-");
            }
            else if (j == 7 || j == 54)
            {
                printf("|");
            }
        }
    }
    color(14);
    gotoxy(15, 8);
    printf("1.��ʼ��Ϸ");
    gotoxy(35, 8);
    printf("2.��Ϸ˵��");
    gotoxy(15, 10);
    printf("3.�˳���Ϸ");
    gotoxy(19, 13);
    color(12);
    printf("��ѡ��[1 2 3]:[ ]\b\b"); //\bΪ�˸�ʹ�ù�괦��[]�м�
    color(14);
    scanf("%d", &n); //����ѡ��
    switch (n)
    {
    case 1:
        system("cls");
        RunGame();
        break;
    case 2:
        explation();
        break;
    case 3:
        exit(0); //�˳���Ϸ
        break;
    }
}

//�޸Ĺ����ַ������ƺ����������ĩ�˵�\0
char *Copy(char *strDest, const char *strSrc)
{
    char *strDestCopy = strDest;
    while (*strSrc != '\0')
    {
        *strDest++ = *strSrc++;
    }
    return strDestCopy;
}
//��ʼ��һ���Ծֺ���
void Initialize()
{
    int i, j;                     //ѭ������
    showText = "";                //������ʾ��Ϣ
    count = 0;                    //�غ�������
    for (i = 0; i < MAXIMUS; i++) //���öԾ�����
    {
        for (j = 0; j < MAXIMUS; j++)
        {
            p[i][j] = 0;
        }
    }
    Cx = Cy = MAXIMUS / 2; //���ù�굽����
    Now = 1;               //���õ�ǰΪ�ڷ�
}
//���������ָ�����꽻��λ�õ��ַ���ͨ���Ʊ��ƴ������
char *getStyle(int i, int j)
{
    if (p[i][j] == 1) //1Ϊ����
        return "��";
    else if (p[i][j] == 2) //2Ϊ����
        return "��";
    else if (i == 0 && j == 0) //����Ϊ��Ե������ʽ
        return "��";
    else if (i == MAXIMUS - 1 && j == 0)
        return "��";
    else if (i == MAXIMUS - 1 && j == MAXIMUS - 1)
        return "��";
    else if (i == 0 && j == MAXIMUS - 1)
        return "��";
    else if (i == 0)
        return "��";
    else if (i == MAXIMUS - 1)
        return "��";
    else if (j == 0)
        return "��";
    else if (j == MAXIMUS - 1)
        return "��";
    return "��"; //�м�Ŀ�λ
}
//���ָ�����꽻��λ�����ϸ����ʽ��ͨ���Ʊ����ģ�������ʾ
char *getCurse(int i, int j)
{
    if (i == Cx)
    {
        if (j == Cy)
            return "��";
        else if (j == Cy + 1)
            return "��";
    }
    else if (i == Cx + 1)
    {
        if (j == Cy)
            return "��";
        else if (j == Cy + 1)
            return "��";
    }
    return "��"; //������ڹ�긽����Ϊ��
}
//�򻺳���д���ַ���
void write(char *c)
{
    Copy(buff[wl] + wp, c);
    wp += strlen(c);
}
//������д��λ������
void ln()
{
    wl += 1;
    wp = 0;
}
//�������������������Ļ
void Display()
{
    int i, l = strlen(showText);          //ѭ���������м�������Ϣ�ĳ���
    int Offset = MAXIMUS * 2 + 2 - l / 2; //����м�������Ϣ������ʾ���ڵĺ�����λ��
    if (Offset % 2 == 1)                  //���λ��Ϊ���������ƶ���ż�����������
    {
        Offset--;
    }
    Copy(buff[MAXIMUS] + Offset, showText); //���м�������Ϣ���Ƶ�������
    if (l % 2 == 1)                         //����м����ֳ���Ϊ������������Ͽո񣬱������
    {
        *(buff[MAXIMUS] + Offset + l) = 0x20;
    }
    system("cls"); //������Ļ��׼��д��
    for (i = 0; i < MAXIMUS * 2 + 1; i++)
    { //ѭ��д��ÿһ��
        printf("%s", buff[i]);
        if (i < MAXIMUS * 2) //д����ÿһ����Ҫ����
            printf("\n");
    }
}
//������������������浽��������Ȼ�����Display������ʾ����
void Print()
{
    int i, j; //ѭ������
    wl = 0;
    wp = 0;
    for (j = 0; j <= MAXIMUS; j++) //д����������Ͻǵ��ַ�����Ϊ��Ҫ��ӡ�������½ǣ����Ժ��Ժ��ݸ���һ��ѭ��
    {
        for (i = 0; i <= MAXIMUS; i++)
        {
            write(getCurse(i, j));      //д�����Ͻ��ַ�
            if (j == 0 || j == MAXIMUS) //������������̱�Ե��û�����ӵ����ߣ��ÿո����λ��
            {
                if (i != MAXIMUS)
                    write("��");
            }
            else //����������м��������߳н�����
            {
                if (i == 0 || i == MAXIMUS - 1) //���ұ�Ե�����߸���
                    write("��");
                else if (i != MAXIMUS) //�м������
                    write("��");
            }
        }
        if (j == MAXIMUS) //��������һ��ѭ������ֻ��Ҫ����߲��ַ�������Ҫ��һ��
        {
            break;
        }
        ln();                         //���п�ʼ��ӡ��������
        write("��");                  //�ÿ�λ����λ��
        for (i = 0; i < MAXIMUS; i++) //��������ѭ�������Ĵ���
        {
            write(getStyle(i, j)); //д�뽻���ַ�
            if (i != MAXIMUS - 1)  //����������Ҳ��򲹳�һ�����߳н�����
            {
                if (j == 0 || j == MAXIMUS - 1)
                {
                    write("��"); //���±�Ե�ĺ��߸���
                }
                else
                {
                    write("��"); //�м�ĺ���
                }
            }
        }
        ln(); //д��һ�к�����
    }
    Display(); //�������������������Ļ
}
int Put()
{ //�ڵ�ǰ���λ�����ӣ�����ǿգ��򷵻�0��ʾʧ��
    if (p[Cx][Cy] == 0)
    {
        p[Cx][Cy] = Now; //�ı��λ������
        return 1;        //����1��ʾ�ɹ�
    }
    else
    {
        return 0;
    }
}
//ʤ����飬���жϵ�ǰ����λ����û���������������
int Check()
{
    int w = 1, x = 1, y = 1, z = 1, i; //�ۼƺ�����б��а�ĸ������������ͬ������Ŀ
    for (i = 1; i < 5; i++)
        if (Cy + i < MAXIMUS && p[Cx][Cy + i] == Now)
            w++;
        else
            break; //���¼��
    for (i = 1; i < 5; i++)
        if (Cy - i > 0 && p[Cx][Cy - i] == Now)
            w++;
        else
            break; //���ϼ��
    if (w >= 5)
        return Now; //�����ﵽ5�����жϵ�ǰ�������ΪӮ��
    for (i = 1; i < 5; i++)
        if (Cx + i < MAXIMUS && p[Cx + i][Cy] == Now)
            x++;
        else
            break; //���Ҽ��
    for (i = 1; i < 5; i++)
        if (Cx - i > 0 && p[Cx - i][Cy] == Now)
            x++;
        else
            break; //������
    if (x >= 5)
        return Now; //�����ﵽ5�����жϵ�ǰ�������ΪӮ��
    for (i = 1; i < 5; i++)
        if (Cx + i < MAXIMUS && Cy + i < MAXIMUS && p[Cx + i][Cy + i] == Now)
            y++;
        else
            break; //�����¼��
    for (i = 1; i < 5; i++)
        if (Cx - i > 0 && Cy - i > 0 && p[Cx - i][Cy - i] == Now)
            y++;
        else
            break; //�����ϼ��
    if (y >= 5)
        return Now; //�����ﵽ5�����жϵ�ǰ�������ΪӮ��
    for (i = 1; i < 5; i++)
        if (Cx + i < MAXIMUS && Cy - i > 0 && p[Cx + i][Cy - i] == Now)
            z++;
        else
            break; //�����ϼ��
    for (i = 1; i < 5; i++)
        if (Cx - i > 0 && Cy + i < MAXIMUS && p[Cx - i][Cy + i] == Now)
            z++;
        else
            break; //�����¼�� if(z>=5)return Now;//�����ﵽ5�����жϵ�ǰ�������ΪӮ��
    return 0;      //��û�м�鵽�����飬�򷵻�0��ʾ��û����Ҵ��ʤ��
}
//���������Ծ֣�����Ӯ����Ϣ(��Ȼ������)
int RunGame()
{
    int input;    //�������
    int victor;   //Ӯ����Ϣ
    Initialize(); //��ʼ���Ծ�
    while (1)
    {                    //��ʼ���޻غϵ���ѭ����ֱ������ʤ������
        Print();         //��ӡ����
        input = getch(); //�ȴ����̰���һ���ַ�
        if (input == 27) //�����ESC���˳�����
        {
            exit(0);
        }
        else if (input == 0x20) //����ǿո���ʼ����
        {
            if (Put()) //������ӳɹ����ж�ʤ��
            {
                victor = Check();
                Now = 3 - Now; //�ֻ���ǰ�������
                count++;
                if (victor == 1) //����ڷ��ﵽʤ������ʾ��ʾ���ֲ��ȴ�һ�ΰ���������ʤ����Ϣ
                {
                    showText = "�ڷ������ʤ����";
                    Print();
                    if (getch() == 0xE0)
                    {
                        getch();
                    }
                    return Now;
                }
                else if (victor == 2) //����׷��ﵽʤ������ʾ��ʾ���ֲ��ȴ�һ�ΰ���������ʤ����Ϣ
                {
                    showText = "�׷������ʤ����";
                    Display();
                    if (getch() == 0xE0)
                    {
                        getch();
                    }
                    return Now;
                }
                else if (count == MAXIMUS * MAXIMUS) //����غ����ﵽ�����������������̳�������Ϊƽ��
                {
                    showText = "ƽ�֣�";
                    Display();
                    if (getch() == 0xE0)
                    {
                        getch();
                    }
                    return 0;
                }
            }
        }
        else if (input == 0xE0) //������µ��Ƿ������������������룬��һ��Ϊ0xE0��ʾ���µ��ǿ��Ƽ�
        {
            input = getch(); //��õڶ���������Ϣ
            switch (input)   //�жϷ���������ƶ����λ��
            {
            case 0x4B:
                Cx--;
                break;
            case 0x48:
                Cy--;
                break;
            case 0x4D:
                Cx++;
                break;
            case 0x50:
                Cy++;
                break;
            }
            if (Cx < 0)
                Cx = MAXIMUS - 1; //������λ��Խ�����ƶ����Բ�
            if (Cy < 0)
                Cy = MAXIMUS - 1;
            if (Cx > MAXIMUS - 1)
                Cx = 0;
            if (Cy > MAXIMUS - 1)
                Cy = 0;
        }
    }
}
/*
*   ��Ϸ˵��
*/
void explation()
{
    int i, j = 1;
    system("cls");
    color(13);
    gotoxy(27, 3);
    printf("��Ϸ˵��");
    color(5);
    for (i = 6; i <= 22; i++) //������±߿�===
    {
        for (j = 3; j <= 58; j++) //������ұ߿�||
        {
            gotoxy(j, i);
            if (i == 6 || i == 22)
                printf("=");
            else if (j == 3 || j == 58)
                printf("||");
        }
    }
    color(15);
    gotoxy(10, 8);
    printf("tip1: �á�.��.��.�����ƹ���λ��");
    color(14);
    gotoxy(10, 11);
    printf("tip2: �ÿո��ȷ��������");
    color(12);
    gotoxy(10, 14);
    printf("tip3: �ڰ����ĸ�����������5������һ�𣬵�ʤ��");
    color(11);
    gotoxy(10, 17);
    printf("tip4: ��<Esc>�˳���Ϸ");
    getch(); //�����������������
    system("cls");
    welcometogame();
}

int main() //������
{
    // system("color 2E");//������ɫ

    welcometogame();

    while (1)
    { //ѭ��ִ����Ϸ
        RunGame();
    }
    return 0;
}
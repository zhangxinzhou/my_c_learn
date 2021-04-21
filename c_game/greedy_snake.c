#include <stdio.h>   //��׼�������������
#include <time.h>    //���ڻ�������
#include <windows.h> //����dos����
#include <stdlib.h>  //��standard library��־��ͷ�ļ������涨����һЩ���ͨ�ù��ߺ���
#include <conio.h>   //���ռ����������

/*******��  ��  ��*******/
#define U 1
#define D 2
#define L 3
#define R 4 //�ߵ�״̬��U���� ��D���£�L:�� R����

/*******��  ��  ȫ  ��  ��  �� *******/
typedef struct snake //�����һ���ڵ�
{
    int x;
    int y;
    struct snake *next;
} snake;
int score = 0, add = 10;     //�ܵ÷���ÿ�γ�ʳ��÷�
int HighScore = 0;           //��߷�
int status, sleeptime = 200; //��ǰ��״̬��ÿ�����е�ʱ����
snake *head, *food;          //��ͷָ�룬ʳ��ָ��
snake *q;                    //�����ߵ�ʱ���õ���ָ��
int endgamestatus = 0;       //��Ϸ�����������1��ײ��ǽ��2��ҧ���Լ���3�������˳���Ϸ��
HANDLE hOut;                 //����̨���

/*******��  ��  ��  �� *******/
void gotoxy(int x, int y); //���ù��λ��
int color(int c);          //����������ɫ
void welcometogame();      //��ʼ����
void createMap();          //���Ƶ�ͼ
void initsnake();          //��ʼ������������
void createfood();         //�������������ʳ��
void cantcrosswall();      //������ײǽ�����
void snakemove();          //������ǰ������
void keyboardControl();    //���Ƽ��̰���
void endgame();            //��Ϸ����
void choose();             //��Ϸʧ��֮���ѡ��
void scoreandtips();
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
    color(14);
    printf("̰ �� �� �� �� ս");
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
    color(11);
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
        createMap();       //������ͼ
        initsnake();       //��ʼ������
        createfood();      //����ʳ��
        keyboardControl(); //��������
        break;
    case 2:
    case 3:
        exit(0); //�˳���Ϸ
        break;
    default: //�����1~3֮���ѡ��
        color(12);
        gotoxy(40, 28);
        printf("������1~3֮�����!");
        getch();       //���������
        system("cls"); //����
        welcometogame();
    }
}

/**
 * ������ͼ
 */
void createMap()
{
    int i, j;
    for (i = 0; i < 58; i += 2) //��ӡ���±߿�
    {
        gotoxy(i, 0);
        color(5); //����ɫ�ı߿�
        printf("��");
        gotoxy(i, 26);
        printf("��");
    }
    for (i = 1; i < 26; i++) //��ӡ���ұ߿�
    {
        gotoxy(0, i);
        printf("��");
        gotoxy(56, i);
        printf("��");
    }
    for (i = 2; i < 56; i += 2) //��ӡ�м�����
    {
        for (j = 1; j < 26; j++)
        {
            gotoxy(i, j);
            color(3);
            printf("��");
        }
    }
}

/**
 * ��ʼ������������
 */
void initsnake()
{
    snake *tail;
    int i;
    tail = (snake *)malloc(sizeof(snake)); //����β��ʼ��ͷ�巨����x,y�趨��ʼ��λ��//
    tail->x = 24;                          //�ߵĳ�ʼλ�ã�24,5��
    tail->y = 5;
    tail->next = NULL;
    for (i = 1; i <= 4; i++) //������������Ϊ5
    {
        head = (snake *)malloc(sizeof(snake)); //��ʼ����ͷ
        head->next = tail;                     //��ͷ����һλΪ��β
        head->x = 24 + 2 * i;                  //������ͷλ��
        head->y = 5;
        tail = head; //��ͷ�����β��Ȼ���ظ�ѭ��
    }
    while (tail != NULL) //��ͷ��β���������
    {
        gotoxy(tail->x, tail->y);
        color(14);
        printf("��");       //�����������ʹ�á����
        tail = tail->next; //��ͷ�����ϣ������ͷ����һλ��һֱ�������β
    }
}

/**
 * �������ʳ��
 */
void createfood()
{
    snake *food_1;
    srand((unsigned)time(NULL));             //��ʼ�������
    food_1 = (snake *)malloc(sizeof(snake)); //��ʼ��food_1
    while ((food_1->x % 2) != 0)             //��֤��Ϊż����ʹ��ʳ��������ͷ���䣬Ȼ��ʳ����������������
    {
        food_1->x = rand() % 52 + 2; //ʳ���������
    }
    food_1->y = rand() % 24 + 1;
    q = head;
    while (q->next == NULL)
    {
        if (q->x == food_1->x && q->y == food_1->y) //�ж������Ƿ���ʳ���غ�
        {
            free(food_1); //��������ʳ���غϣ���ô�ͷ�ʳ��ָ��
            createfood(); //���´���ʳ��
        }
        q = q->next;
    }
    gotoxy(food_1->x, food_1->y);
    food = food_1;
    color(12);
    printf("��"); //���ʳ��
}

/**
 * ������ײǽ�����
 */
void cantcrosswall()
{
    if (head->x == 0 || head->x == 56 || head->y == 0 || head->y == 26) //�����ͷ������ǽ��
    {
        endgamestatus = 1; //���ص�һ�����
        endgame();         //������Ϸ��������
    }
}

/**
 *  ���Ʒ���    ���⣺ΪʲôҪ����status������ʹ��ǰ�����н��ռ��̰����ķ���
 */
void snakemove() //��ǰ��,��U,��D,��L,��R
{
    snake *nexthead;
    cantcrosswall();
    nexthead = (snake *)malloc(sizeof(snake)); //Ϊ��һ�����ٿռ�
    if (status == U)
    {
        nexthead->x = head->x; //����ǰ��ʱ��x���겻����y����-1
        nexthead->y = head->y - 1;
        nexthead->next = head;
        head = nexthead;
        q = head;                                             //ָ��qָ����ͷ
        if (nexthead->x == food->x && nexthead->y == food->y) //�����һ����ʳ�� ��һ��λ�õ������ʳ���������ͬ
        {

            while (q != NULL)
            {
                gotoxy(q->x, q->y);
                color(14);
                printf("��"); //ԭ��ʳ���λ�ã��ӡ񻻳ɡ�
                q = q->next; //ָ��qָ����������һλҲִ��ѭ����Ĳ���
            }
            score = score + add; //����һ��ʳ����ܷ��ϼ���ʳ��ķ�
            createfood();        //����ʳ��
        }
        else
        {
            while (q->next->next != NULL) //���û����ʳ��
            {
                gotoxy(q->x, q->y);
                color(14);
                printf("��"); //��������ǰ�ߣ������ǰλ�õ�����
                q = q->next; //���������������
            }
            gotoxy(q->next->x, q->next->y); //���������ѭ����qָ����β����β����һλ���������߹�ȥ��λ��
            color(3);
            printf("��");
            free(q->next);  //���������֮���ͷ�ָ����һλ��ָ��
            q->next = NULL; //ָ����һλָ���
        }
    }
    if (status == D)
    {
        nexthead->x = head->x; //����ǰ��ʱ��x���겻����y����+1
        nexthead->y = head->y + 1;
        nexthead->next = head;
        head = nexthead;
        q = head;
        if (nexthead->x == food->x && nexthead->y == food->y) //��ʳ��
        {

            while (q != NULL)
            {
                gotoxy(q->x, q->y);
                color(14);
                printf("��");
                q = q->next;
            }
            score = score + add;
            createfood();
        }
        else //û��ʳ��
        {
            while (q->next->next != NULL)
            {
                gotoxy(q->x, q->y);
                color(14);
                printf("��");
                q = q->next;
            }
            gotoxy(q->next->x, q->next->y);
            color(3);
            printf("��");
            free(q->next);
            q->next = NULL;
        }
    }
    if (status == L)
    {
        nexthead->x = head->x - 2; //����ǰ��ʱ��x���������ƶ�-2��y���겻��
        nexthead->y = head->y;
        nexthead->next = head;
        head = nexthead;
        q = head;
        if (nexthead->x == food->x && nexthead->y == food->y) //��ʳ��
        {
            while (q != NULL)
            {
                gotoxy(q->x, q->y);
                color(14);
                printf("��");
                q = q->next;
            }
            score = score + add;
            createfood();
        }
        else //û��ʳ��
        {
            while (q->next->next != NULL)
            {
                gotoxy(q->x, q->y);
                color(14);
                printf("��");
                q = q->next;
            }
            gotoxy(q->next->x, q->next->y);
            color(3);
            printf("��");
            free(q->next);
            q->next = NULL;
        }
    }
    if (status == R)
    {
        nexthead->x = head->x + 2; //����ǰ��ʱ��x���������ƶ�+2��y���겻��
        nexthead->y = head->y;
        nexthead->next = head;
        head = nexthead;
        q = head;
        if (nexthead->x == food->x && nexthead->y == food->y) //��ʳ��
        {
            while (q != NULL)
            {
                gotoxy(q->x, q->y);
                color(14);
                printf("��");
                q = q->next;
            }
        }
        else //û��ʳ��
        {
            while (q->next->next != NULL)
            {
                gotoxy(q->x, q->y);
                color(14);
                printf("��");
                q = q->next;
            }
            gotoxy(q->next->x, q->next->y);
            color(3);
            printf("��");
            free(q->next);
            q->next = NULL;
        }
    }
}

/**
 * ���Ƽ��̰���
 */
void keyboardControl()
{
    status = R; //��ʼ�������ƶ�
    while (1)
    {

        if (GetAsyncKeyState(VK_UP) && status != D) //GetAsyncKeyState���������жϺ�������ʱָ���������״̬
        {
            status = U; //����߲�������ǰ����ʱ�򣬰��ϼ���ִ������ǰ������
        }
        else if (GetAsyncKeyState(VK_DOWN) && status != U) //����߲�������ǰ����ʱ�򣬰��¼���ִ������ǰ������
        {
            status = D;
        }
        else if (GetAsyncKeyState(VK_LEFT) && status != R) //����߲�������ǰ����ʱ�򣬰������ִ������ǰ��
        {
            status = L;
        }
        else if (GetAsyncKeyState(VK_RIGHT) && status != L) //����߲�������ǰ����ʱ�򣬰��Ҽ���ִ������ǰ��
        {
            status = R;
        }
        if (GetAsyncKeyState(VK_SPACE)) //����ͣ����ִ��pause��ͣ����
        {
            while (1)
            {
                Sleep(300);                     //sleep()������ͷ�ļ�#include <unistd.h>  �������ͣ��֪���ﵽ�����趨�Ĳ�����ʱ�䡣
                if (GetAsyncKeyState(VK_SPACE)) //���ո����ͣ
                {
                    break;
                }
            }
        }
        else if (GetAsyncKeyState(VK_ESCAPE))
        {
            endgamestatus = 3; //��esc����ֱ�ӵ���������
            break;
        }

        Sleep(sleeptime);
        snakemove();
    }
}

/**
 * ������Ϸ
 */
void endgame()
{
    system("cls");
    if (endgamestatus == 1)
    {

        gotoxy(13, 3);
        color(12);
        printf("�Բ�����ײ��ǽ�ˡ���Ϸ������");
    }
    gotoxy(23, 7);
    color(13);
    printf("���ĵ÷��� %d", score);

    choose();
}

/**
 * �߿�����ķ�֧ѡ��
 */
void choose()
{
    int m;
    gotoxy(8, 11);
    color(14);
    printf("��Ҫ������һ��-------1");
    gotoxy(35, 11);
    printf("�����ˣ��˳���-------2");
    gotoxy(29, 13);
    color(11);
    printf("ѡ��");
    scanf("%d", &m);
    switch (m)
    {
    case 1:
        system("cls");   //����
        score = 0;       //��������
        sleeptime = 200; //�趨��ʼ�ٶ�
        add = 10;        //ʹadd�趨Ϊ��ֵ����һ��ʳ��÷�10��Ȼ���ۼ�
        welcometogame();
        break;
    case 2:
        exit(0); //�˳���Ϸ
        break;
    }
}

/**
* ������
*/
int main()
{
    system("mode con cols=100 lines=30"); //���ÿ���̨�Ŀ��
    welcometogame();

    keyboardControl();
    endgame();
    return 0;
}

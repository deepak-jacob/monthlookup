#include <stdio.h>
#include <conio.h>
int dy = 3, dt = 0, ch, ye = 0, mo = 0, i, temp, nod = 31, flag;
//*************************drawing table*******************
void draw()
{
    int temp = 10, i;
    textcolor(3);
    for (i = 11; i <= 65; i++)
    {
        gotoxy(i, 10);
        putch(205);
    }
    for (i = 11; i <= 65; i++)
    {
        gotoxy(i, 24);
        putch(205);
    }

    for (i = 11; i <= 65; i++)
    {
        gotoxy(i, 12);
        putch(205);
    }
    temp = 10;
    while (temp < 67)
    {
        for (i = 11; i <= 23; i++)
        {
            gotoxy(temp, i);
            putch(186);
        }
        temp = temp + 8;
    }
    //*********corners*******
    gotoxy(10, 10);
    putch(201);
    gotoxy(10, 24);
    putch(200);
    gotoxy(66, 10);
    putch(187);
    gotoxy(66, 24);
    putch(188);
    //*********203**********
    gotoxy(18, 10);
    putch(203);
    gotoxy(26, 10);
    putch(203);
    gotoxy(34, 10);
    putch(203);
    gotoxy(42, 10);
    putch(203);
    gotoxy(50, 10);
    putch(203);
    gotoxy(58, 10);
    putch(203);

    //*********202**********
    gotoxy(18, 24);
    putch(202);
    gotoxy(26, 24);
    putch(202);
    gotoxy(34, 24);
    putch(202);
    gotoxy(42, 24);
    putch(202);
    gotoxy(50, 24);
    putch(202);
    gotoxy(58, 24);
    putch(202);
    //*********206*********
    gotoxy(18, 12);
    putch(206);
    gotoxy(26, 12);
    putch(206);
    gotoxy(34, 12);
    putch(206);
    gotoxy(42, 12);
    putch(206);
    gotoxy(50, 12);
    putch(206);
    gotoxy(58, 12);
    putch(206);

    gotoxy(10, 12);
    putch(204);
    gotoxy(66, 12);
    putch(185);

    gotoxy(11, 11);
    cprintf("  SUN");
    gotoxy(19, 11);
    cprintf("  MON");
    gotoxy(27, 11);
    cprintf("  TUE");
    gotoxy(35, 11);
    cprintf("  WED");
    gotoxy(43, 11);
    cprintf("  THU");
    gotoxy(51, 11);
    cprintf("  FRI");
    gotoxy(59, 11);
    cprintf("  SAT");
    textcolor(7);
}

//************************put***********************
void put(int nod, int day, int dat)
{
    int x = 6, y = 13, add = day * 8, i;
    x = x + add;
    for (i = 1; i <= nod; i++)
    {
        if (dat == i)
        {
            textcolor(13);
        }
        gotoxy(x, y);
        cprintf("%d", i);
        if (dat == i)
        {
            textcolor(7);
        }
        day++;
        if (day == 8)
        {
            day = 1;
            y = y + 2;
            x = 14;
        }
        else
        {
            x = x + 8;
        }
    }
}

//***************************enhan***********************
void enhan()
{
    textcolor(4);
    gotoxy(32, 9);
    if (mo == 1)
        cprintf("JANUARY");
    if (mo == 2)
        cprintf("FEBRUARY");
    if (mo == 3)
        cprintf(" MARCH");
    if (mo == 4)
        cprintf(" APRIL");
    if (mo == 5)
        cprintf("  MAY");
    if (mo == 6)
        cprintf(" JUNE");
    if (mo == 7)
        cprintf("  JULY");
    if (mo == 8)
        cprintf(" AUGUST");
    if (mo == 9)
        cprintf("SEPTEMBER");
    if (mo == 10)
        cprintf("OCTOBER");
    if (mo == 11)
        cprintf("NOVEMBER");
    if (mo == 12)
        cprintf("DECEMBER");
    cprintf(" - %d", ye);
    textcolor(1);
    gotoxy(50, 25);
    cprintf("Hit a key to back to menu.....");
}

//*******************check leap*******************
int chklp(int cye)
{
    int flag = 0;
    if (cye % 4 == 0)
    {
        if (cye % 100 == 0)
        {
            if (cye % 400 == 0)
                flag = 1;
            else
                flag = 0;
        }
        else
            flag = 1;
    }
    else
        flag = 0;
    return (flag);
}
//************************day add*********************
void ady()
{
    dy++;
    if (dy == 8)
        dy = 1;
}
//************************bar*************************
void bar(int q)
{
    clrscr();
    textbackground(9);
    if (q == 1)
    {
        cprintf("                                                                                ");
        cprintf("                        DS Calander - [Home page]                               \n\n");
    }
    if (q == 2)
        cprintf(" DS Calander - [Program]                                                        \n\n");
    if (q == 3)
        cprintf(" DS Calander - [Help]                                                           \n\n");
    if (q == 4)
        cprintf(" DS Calander - [Exiting..]                                                      \n\n");
    textbackground(0);
}
//**************************flash screen*************************
void flash()
{
    int i;
    clrscr();
    textcolor(9);
    gotoxy(22, 10);
    cprintf("D");
    delay(100);
    cprintf("e");
    delay(100);
    cprintf("e");
    delay(100);
    cprintf("p");
    delay(100);
    cprintf("a");
    delay(100);
    cprintf("k");
    delay(100);
    cprintf("a");
    delay(100);
    cprintf("m ");
    delay(100);
    cprintf("S");
    delay(100);
    cprintf("o");
    delay(100);
    cprintf("f");
    delay(100);
    cprintf("t");
    delay(100);
    cprintf("w");
    delay(100);
    cprintf("a");
    delay(100);
    cprintf("r");
    delay(100);
    cprintf("e");
    delay(100);
    cprintf("s");
    delay(100);
    cprintf(" pvt Ltd");
    gotoxy(29, 15);
    cprintf("Loading -");
    for (i = 0; i <= 100; i++)
    {
        textcolor(i);
        gotoxy(38, 15);
        cprintf("%d", i);
        delay(25);
    }
    delay(150);
    textcolor(7);
}

//***************************main*************************
void main()
{
    flash();
    do
    {
        dy = 3;
        bar(1);
        gotoxy(10, 7);
        printf("1.Enter to calander program");
        gotoxy(10, 8);
        printf("2.Help");
        gotoxy(10, 9);
        printf("3.Exit");
        gotoxy(10, 11);
        printf("Enter your choice:");
        scanf("%d", &ch);
        if (ch == 1)
        {
        ch1:
            bar(2);
            printf("Enter the year:");
            scanf("%d", &ye);
            if (ye < 4 || ye > 10000)
            {
                printf("Not a valid year,please reenter");
                delay(1500);
                goto ch1;
            }
            printf("Enter the month(1 to 12):");
            scanf("%d", &mo);
            if (mo < 1 || mo > 12)
            {
                printf("Not a valid month,please reenter");
                delay(1500);
                goto ch1;
            }
            printf("Enter the date:");
            scanf("%d", &dt);

            //****jan 1****
            for (i = 2; i < ye; i++)
            {
                ady();
                temp = chklp(i);
                if (temp == 1)
                    ady();
            }
            //****month*****
            if (mo >= 2)
            {
                ady();
                ady();
                ady();
                temp = chklp(ye);
                if (temp == 1)
                    nod = 29;
                else
                    nod = 28;
            }
            if (mo >= 3)
            {
                temp = chklp(ye);
                if (temp == 1)
                    ady();
                nod = 31;
            }
            if (mo >= 4)
            {
                ady();
                ady();
                ady();
                nod = 30;
            }
            if (mo >= 5)
            {
                ady();
                ady();
                nod = 31;
            }
            if (mo >= 6)
            {
                ady();
                ady();
                ady();
                nod = 30;
            }
            if (mo >= 7)
            {
                ady();
                ady();
                nod = 31;
            }
            if (mo >= 8)
            {
                ady();
                ady();
                ady();
                nod = 31;
            }
            if (mo >= 9)
            {
                ady();
                ady();
                ady();
                nod = 30;
            }
            if (mo >= 10)
            {
                ady();
                ady();
                nod = 31;
            }
            if (mo >= 11)
            {
                ady();
                ady();
                ady();
                nod = 30;
            }
            if (mo == 12)
            {
                ady();
                ady();
                nod = 31;
            }
            flag = 0;
            for (i = 1; i <= nod; i++)
            {
                if (dt == i)
                    flag = 1;
            }
            if (flag == 0)
            {
                printf("Not a valid date in this month,please reenter");
                delay(1500);
                goto ch1;
            }

            put(nod, dy, dt);
            draw();
            enhan();
            getch();
            textcolor(7);
        }
        if (ch == 2)
        {
            bar(3);
            printf("\n\n\nYou can enter any valid years from 4 to 9999\n\nThank you for using help");
            getch();
        }
        if (ch == 3)
        {
            bar(4);
            printf("\n\n\n                  Thank you for using DS-Calander\n\n\n\n\n                  Exiting......");
            delay(2000);
        }
    } while (ch != 3);
}

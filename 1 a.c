#include <stdio.h>
#include <conio.h>
#include <graphics.h>
void drawline(int x0, int y0, int x1, int y1)
{
    int dx, dy, p, x, y;
    dx = x1 - x0;
    dy = y1 - y0;
    x = x0;
    y = y0;
    p = 2 * dy - dx;
    while ((x <= x1) && (y <= y1))
    {
        if (p >= 0)
        {
            putpixel(x, y, 7);
            if (y != y1)
                y = y + 1;
            p = p + 2 * dy - 2 * dx;
        }
        else
        {
            putpixel(x, y, 7);
            p = p + 2 * dy;
        }
        if (x != x1)
            x = x + 1;
        if ((x == x1) && (y == y1))
            break;
    }
}
int main()
{
    int gdriver = DETECT, gmode, error, x0, y0, x1, y1;
    initgraph(&gdriver, &gmode, "c:\\turboc3\\bgi");
    printf("Enter first co-ordinates point: ");
    scanf("%d%d", &x0, &y0);
    printf("Enter second co-ordinates point: ");
    scanf("%d%d", &x1, &y1);
    drawline(x0, y0, x1, y1);
    getch();
    return 0;
}

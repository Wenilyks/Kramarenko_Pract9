#include <stdio.h>

int step (int x, int y)
{
    int res = 0, dist = y-x;
    int step_size = 1;
    while (dist > 0)
    {
        if (dist - step_size >= 0)
        {
            dist -= step_size;
        } 
        else
        {
            step_size = dist;
            dist = 0;
        }
        res++;
        if (dist == 0) 
        break;
        if (dist - step_size >= 0)
        {
            dist -= step_size;
        } 
        else
        {
            step_size = dist;
            dist = 0;
        }
        res++;
        step_size++;
    }
    return res;
}
int main()
{
    int x, y;
    printf("Введіть x та y: ");
    scanf("%d %d",&x, &y);
    if(y<x || x<0 || y<0)
    {
        printf("Error");
        return -1;
    }
    int res = step(x,y);
    printf("x:%d y:%d res:%d", x, y, res);
    return 0;
}
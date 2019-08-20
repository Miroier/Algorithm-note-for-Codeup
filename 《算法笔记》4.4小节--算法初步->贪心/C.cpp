//本题代码来自https://www.cnblogs.com/XBWer/p/3866486.html
#include <stdio.h>
#include <algorithm>
#include <iostream>
using namespace std;

typedef struct
{
    double pos;
    double price;
} gasstation;
gasstation gasst[502];

bool cmp(gasstation a, gasstation b)
{
    if (a.pos < b.pos)
        return true;
    return false;
}

int main()
{
    double Cmax, D, Davg;
    int N;
    scanf("%lf%lf%lf%d", &Cmax, &D, &Davg, &N);
    int i;
    for (i = 0; i < N; i++)
        scanf("%lf%lf", &gasst[i].price, &gasst[i].pos);
    sort(gasst, gasst + N, cmp);
    if (D == 0)
    {
        printf("0.00\n");
        return 0;
    }
    if (gasst[0].pos != 0)
    {
        printf("The maximum travel distance = 0.00\n");
        return 0;
    }
    int curstnum = 0;               //当前所处的油站编号,即当前的位置
    double curgas = 0;              //当前的油量
    double curcost = 0;             //当前的花费
    bool flag = false;              //是否达到目的
    double maxrundis = Cmax * Davg; //邮箱加满最远能行驶的距离
    while (!flag)
    {
        bool tag = false;             //最大距离内是否有加油站
        bool ifcheaper = false;       //是否有便宜的
        double cheapestprice = 10000; //找出最便宜的
        int cheapestnum;              //没有更便宜的情况下，找出最便宜的
        for (i = curstnum + 1; i < N; i++)
        {
            if ((gasst[i].pos - gasst[curstnum].pos) <= maxrundis) //范围内
            {
                tag = true;                                 //有加油站
                if (gasst[i].price < gasst[curstnum].price) //情况3-a
                {                                           //且有更便宜的
                    ifcheaper = true;
                    double dist = gasst[i].pos - gasst[curstnum].pos;
                    double needgas = dist / Davg - curgas;
                    curgas = 0;
                    curcost += (needgas * gasst[curstnum].price);
                    curstnum = i;
                    break;
                }
                if (gasst[i].price < cheapestprice)
                {
                    cheapestprice = gasst[i].price;
                    cheapestnum = i;
                }
            }
            else
                break;
        }
        if (!ifcheaper && (maxrundis >= (D - gasst[curstnum].pos))) //说明已经可以到达目的地了,情况1
        {
            double dist = D - gasst[curstnum].pos;
            double needgas = dist / Davg - curgas;
            curcost += needgas * gasst[curstnum].price;
            printf("%.2lf\n", curcost);
            return 0;
        }
        if (tag && !ifcheaper) //情况3-b
        {
            double needgas = Cmax - curgas;
            curcost += (needgas * gasst[curstnum].price);
            double dist = gasst[cheapestnum].pos - gasst[curstnum].pos;
            curgas = Cmax - dist / Davg;
            curstnum = cheapestnum;
        }
        else if (!tag) //情况2
        {
            printf("The maximum travel distance = %.2lf\n", gasst[curstnum].pos + maxrundis);
            return 0;
        }
    }
    return 0;
}
/*啊啊啊，过不了啊
#include "cstdio"
#include "algorithm"
const double eps = 1e-8;
#define MoreEqu(a, b) (((a) - (b)) > (-eps))
using namespace std;
struct gassta
{
    double price;
    double dis;
} gs[500];
bool cmp(gassta a, gassta b)
{
    return a.dis < b.dis;
}
int main()
{
    double C, D, Davg;
    int N;
    while (scanf("%lf %lf %lf %d", &C, &D, &Davg, &N) != EOF)
    {
        for (int i = 0; i < N; i++)
            scanf("%lf %lf", &gs[i].price, &gs[i].dis);
        sort(gs, gs + N, cmp);
        gs[N].dis = D; //把目标城市作为一个特殊的加油站
        double X = 0;
        if (gs[0].dis > 0)
        {
            printf("The maximum travel distance = 0.00\n");
            continue;
        }
        int sympol = 0;
        for (int i = 1; i <= N; i++)
        {
            if (gs[i].dis - gs[i - 1].dis > C * Davg)
            {
                printf("The maximum travel distance = %.2lf\n", X + C * Davg);
                sympol = 1;
                break;
            }
            X += gs[i].dis;
        }
        if (sympol == 1)
            continue;
        double cost = 0;
        double curLen = 0, maxdis = C * Davg;
        double curgas = 0;
        for (int i = 0; i < N;)
        {
            double minprice = gs[i].price; //[i,j]范围内最小的
            int j = i + 1, flag = 0, index;
            gs[N].price = gs[i].price;
            for (; maxdis > gs[j].dis - gs[i].dis && j <= N; j++)
            {
                if (MoreEqu(minprice, gs[j].price))
                {
                    minprice = gs[j].price;
                    flag = 1;
                    index = j;
                    break;
                }
            }
            int k = i + 1;
            double min2price = gs[k].price; //(i,j]范围内最小的
            int index2 = k;
            for (; k < j; k++)
            {
                if (MoreEqu(min2price, gs[k].price))
                {
                    min2price = gs[k].price;
                    index2 = k;
                }
            }
            if (flag == 0)
            {
                cost += (C - curgas) * gs[i].price;
                curgas = C;
                curLen = gs[index2].dis;
                curgas -= (curLen - gs[i].dis) / Davg; //汽油可能会有余量
                i = index2;
            }
            if (flag == 1)
            {
                cost += ((gs[index].dis - gs[i].dis) / Davg - curgas) * gs[i].price;
                curLen = gs[index].dis;
                curgas = 0; //刚好到达汽油不会有余量
                i = index;
            }
        }
        printf("%.2lf\n", cost);
    }
    return 0;
}*/

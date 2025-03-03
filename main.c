#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{

    double s,c;
    scanf("%lf",&s);
    if(s>0&&s<=0.8){
        c=10000;
        printf("%.lf",((round(c/1000))*1000));
    }else if(0.8< s && s<=30.8){
        c = 10000+(s-0.8)*11000;
        printf("%.lf",((round(c/1000))*1000));
    }else{
        c= 10000+30*11000+(s-30.8)*10000;
        printf("%.lf",((round(c/1000))*1000));
    }

return 0;
}

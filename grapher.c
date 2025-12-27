#include <stdio.h>
#include <math.h>
#define M_PIR 0.31830988618

// You need to zoom out to properly see the graph
typedef float Param;
typedef int Span;
int main(){

 while(1){
    printf("type anything and press enter to start");
    scanf("%d");            // start after zooming out
    Sigma();
 }

 return 0;
}


int Sigma()
{
    Param ratio = 10;        // precision. to the nth decimal.
    Span r=500;             // y axis span
    Span s=500;              // x axis span
    float i=0;                // functions like x, value thats used to evaluate
    float f;
    float j=0;
    float func(float i){            // mathematical function
    i = i*(1/ratio);
    f = 10*sin(i);             // actual mathematical expression!
    f = f*ratio;
    return f;
    }
        for(i=-s; i<s; i++)                                     // making "i" start from "-s" and adding "r/2" to func(i) made it so (r/2)th column and sth row make up the (0, 0).
        {
        printf("*");
            for(j=0; j<func(i) + r/2 && j<r; j++)      // "&& j<1000" is to put a maximum to its height,
            {                                                   // to stop it from flowing and messing up the shape
                printf(" ");
                if (j==r/2) {printf("O");} // prints x axis
                if (i==0)   {printf("O");} // prints y axis
            }
        printf("I   (%2f-%2f\n)",i*(1/ratio), f*(1/ratio));

        }

}


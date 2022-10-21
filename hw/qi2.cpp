#include <iostream>
using namespace std;
int main(){
    int long_base, short_base, altitude;
    printf("enter your long_base, short_base, altitude\n");
    printf("long_base: ");
    scanf("%d",&long_base);
    printf("short_base: ");
    scanf("%d",&short_base);
    printf("altitude: ");
    scanf("%d",&altitude);
    float area = float((long_base + short_base) * altitude )/2;
    printf("area: %.1f\n", area);
    return 0;
}
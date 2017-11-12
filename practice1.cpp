#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    float mealCost;
    float tipPercent,tip;
    float taxPercent,tax;
    float totalCost;
    int roundcost;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    cin>>mealCost;
    cin>>tipPercent;
    cin>>taxPercent;
    
    tip=(mealCost*(tipPercent/100));
    tax=(mealCost*(taxPercent/100));
    
    totalCost=mealCost+tip+tax;
    
    roundcost=round(totalCost);
    cout<<"The total meal cost is "<< roundcost<< " dollars.";
    return 0;
}

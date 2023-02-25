#include <iostream>
#include <algorithm>
using namespace std;

int adigits(int a,int b,int c){
    int temp1,temp2,maxi,mini,mid;
    temp1 = max(b,c);
    temp2 = min(b,c);
    maxi = max(a,temp1);
    mini = min(a,temp2);
    if (a==c&&a==maxi){return maxi*100+c*10+mini;}
    else if (a==c&&a==mini){return maxi*100+c*10+mini;}
    else if (b==a&&b==mini){return maxi*100+b*10+mini;}
    else if (b==a&&b==maxi){return maxi*100+b*10+mini;}
    else if (b==c&&b==mini){return maxi*100+b*10+mini;}
    else if (b==c&&b==maxi){return maxi*100+b*10+mini;}
    else if (b!=mini&&b!=maxi){mid = b;}
    else if (a!=mini&&a!=maxi){mid = a;}
    else {mid=c;}
    return maxi*100+mid*10+mini;
}

int main(){
    cout << adigits(4,5,5) << '\n';
    return 0;
}


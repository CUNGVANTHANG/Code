#include<stdio.h>
#include<math.h>

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(a + b < c){
        printf("false");
    }
      if(a + c < b){
        printf("false");
    }
      if(b + c < a){
        printf("false");
    }
    
    if(a + b > c && a + c > b && b + c > a){
        printf("true");
    }
    
}

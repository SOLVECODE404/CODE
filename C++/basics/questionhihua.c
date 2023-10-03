#include<stdio.h>
#include<stdlib.h>

struct books{
    char moviename[1000];
    char genre[1000];
    float rating;
};
int main(){
    int n;
    struct books s[n];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s",s[i].moviename);
        scanf("%s",s[i].genre);
        scanf("%f",&s[i].rating);
    }
    int ratingthreshold;
    scanf("%d",&ratingthreshold);
    int index=0;
    for(int i=1;i<=n;i++){
        if(s[i].rating>s[index].rating){
            index=i;
        }
    }
    if(s[index].rating>ratingthreshold){
            printf("%s\n",s[index].moviename);
            printf("%s\n",s[index].genre);
            printf("%.1f\n",s[index].rating);
        }
    else{
            printf("no movies to recommend");
    }
}
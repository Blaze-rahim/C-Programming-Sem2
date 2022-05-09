#include <stdio.h>
struct hockey{
    char name[50];
    char country[50];
    int matches_played;
    int no_goals;
}s[200];


int main(){
    int n,i,j;
    printf("Enter No. of players");
    scanf("%d",&n);

    for(i=0; i<n ; i++){
        printf("\nEnter details of player %d",i+1);
        
        printf("\nName : ");
        scanf("%s",&s[i].name);

        printf("Country : ");
        scanf("%s",&s[i].country);

        printf("Matches played : ");
        scanf("%d",&s[i].matches_played);

        printf("Number of goals : ");
        scanf("%d",&s[i].no_goals);
    }

    printf("Name\tCountry\tMatchs\tgoals\n");

    for(i=0; i<n ; i++){
        printf("%s\t%s\t%d\t%d\n",s[i].name,s[i].country,s[i].matches_played,s[i].no_goals);
    }
    return 0;
}
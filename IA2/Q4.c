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

// Output:

// Enter No. of players2

// Enter details of player 1
// Name : Abdul
// Country : India
// Matches played : 10
// Number of goals : 30

// Enter details of player 2
// Name : Yashas
// Country : India
// Matches played : 90
// Number of goals : 200
// Name    Country Matchs  goals
// Abdul   India   10      30
// Yashas  India   90      200
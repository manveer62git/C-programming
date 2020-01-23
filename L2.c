#include <stdio.h>
void main() {
	char array[30][1000];
	int i =0;
	int maxPoints = 0;
	int maxStreak = 0;
	char team[30];
	while(scanf("%30s", team) != EOF){
		int wins;
		int tied;
		int losses;
		int streak; 
		scanf("%d",&wins); 
		scanf("%d",&tied); 
		scanf("%d",&losses); 
		scanf("%d",&streak);
		int points = ((int)wins*3 + tied);
		int totalGames = wins+tied+losses;
		if(wins<0 || tied<0 || losses<0){
			sprintf(array[i], "%s\tnegative number of games",team);
		} else if(totalGames>99){
			sprintf(array[i], "%s\tgames played are more than 99",team);
		} else {
			if(streak>maxStreak){
				maxStreak = streak;
			}
			if(points>maxPoints){
				maxPoints = points;
			}
			sprintf(array[i], "%s\t%3d\t%+3d",team, points, streak);
		}
		i=i+1; 
	}
	int j = 0;
	while(j<=i){
		printf("%s\n", array[j]);
		j = j+1;
	}
	printf("\nThe maximum points by any team is%5d\n", maxPoints);
	printf("The longest winning streak is%5d", maxStreak);
}

//#include <stdio.h>
//#include <stdlib.h>
//#include "list.h"
//void showmovies(item item);
//
///*int main()
//{
//	list movies;
//	item temp;
//	
//	initializelist(&movies);
//	if(listisfull(&movies))
//	{
//		fprintf(stderr,"no memory avaible!bye!\n");
//		exit(1);
//	}
//
//	puts("enter first movie title: ");
//	while(gets(temp.title)!= null && temp.title[0]!= '\0')
//	{
//		puts("enter your rating<0-10>: ");
//		scanf("%d",&temp.rating);
//		while(getchar()!= '\n')
//			continue;
//		//getchar();
//		if(additem(temp,&movies) == false)
//		{
//			fprintf(stderr,"problem allocating memory\n");
//			break;
//		}
//		if(listisfull(&movies))
//		{
//			puts("the list is now full.");
//			break;
//		}
//		puts("enter next movie title (empty line to stop):");
//	}
//
//	if(listisempty(&movies))
//		printf("no data entered.");
//	else
//	{
//		printf("here is the movie list: \n");
//		traverse(&movies,showmovies);
//	}
//	printf("you entered %d movies.\n",listitemcount(&movies));
//
//	emptythelist(&movies);
//	printf("bye!\n");
//	return 0;
//}
//*/
//void showmovies(item item)
//{
//	printf("movie: %s rating: %d\n",item.title,item.rating);
//}
///* pteclub_use_tree.c -- 使用二叉搜索树 */
//#include <stdio.h>
//#include <string.h>
//#include <ctype.h>
//#include "tree.h"
//
//char meau(void);
//void addpet(Tree * pt);
//void droppet(Tree * pt);
//void showpets(const Tree * pt);
//void findpet(const Tree * pt);
//void printitem(Item item);
//void uppercase(char * str);
//int getlet(const char * s);
//void showmeau(void);
//
//
//int main(void)
//{
//	Tree pets;
//	char choice;
//
//	InitializeTree(&pets);
//	while((choice = meau()) != 'q')
//	{
//		switch(choice)
//		{
//			case 'a':
//				addpet(&pets);
//				break;
//			case 'l':
//				showpets(&pets);
//				break;
//			case 'f':
//				findpet(&pets);
//				break;
//			case 'n':
//				printf("%d pets in club.\n",TreeItemCount(&pets));
//				break;
//			case 'd':
//				droppet(&pets);
//				break;
//			default:
//				puts("Switching error!\n");
//		}
//	}
//
//}
//
//char meau(void)
//{
//	char choice;
//	showmeau();
//	choice = getlet("alnfdqALNFDQ");
//	return choice;
//}
//
//void showmeau(void)
//{
//	puts("Nerfville Pet club Membership Program");
//	puts("Enter the letter corresponding to your choice: ");
//	puts("a) add a pet         l) show list of pets");
//	puts("n) number of pets    f) find pets");
//	puts("d) delete a pet      q) quit");
//}
//
//int getlet(const char * s)
//{
//	char c;
//	c = getchar();
//	while (strchr(s, c) == NULL)
//	{
//		printf ("Enter a character in the list %s\n", s);
//		while( getchar() != '\n')
//			continue;
//		c = getchar();
//	}
//	while (getchar() != '\n')
//		continue;
//	return c;
//}
//
//void addpet(Tree * pt)
//{
//	Item temp;
//
//	if(TreeIsFull(pt))
//		puts("No room in the club!");
//	else
//	{
//		puts("Please enter name of pet: ");
//		gets(temp.petname);
//		puts("Please enter pet kind: ");
//		gets(temp.petkind);
//		uppercase(temp.petname);
//		uppercase(temp.petkind);
//		AddItem(&temp,pt);
//	}
//}
///* 将给定字符串全部转为大写 */
//void uppercase(char * str)
//{
//	while(*str)
//	{
//		*str = toupper(*str);
//			str++;
//	}
//}
//
//void showpets(const Tree * pt)
//{
//	if(TreeIsEmpty(pt))
//		puts("No entries!");
//	else
//		Tracerse(pt,printitem);
//}
//
//void printitem(Item item)
//{
//	printf("Pet: %-19s Kind: %-19s\n",item.petname,item.petkind);
//}
//
//void findpet(const Tree * pt)
//{
//	Item temp;
//
//	if(TreeIsEmpty(pt))
//	{
//		puts("No entries!");
//		return;
//	}
//
//	puts("Please enter name of pet you wish to find: ");
//	gets(temp.petname);
//	puts("Please enter pet kind: ");
//	gets(temp.petkind);
//	uppercase(temp.petname);
//	uppercase(temp.petkind);
//	printf("%s the %s ",temp.petname,temp.petkind);
//	if(InTree(&temp,pt))
//		printf("is a member.\n");
//	else
//		printf("is not a member.\n");
//}
//
//void droppet(Tree * pt)
//{
//	Item temp;
//
//	if(TreeIsEmpty(pt))
//	{
//		puts("No entries!");
//		return;
//	}
//
//	puts("Please enter name of pet you wish to delete: ");
//	gets(temp.petname);
//	puts("Please enter pet kind: ");
//	gets(temp.petkind);
//	uppercase(temp.petname);
//	uppercase(temp.petkind);
//	printf("%s the %s ",temp.petname,temp.petkind);
//	if(DeleteItem(&temp,pt))
//		printf("is dropped from the club.\n");
//	else
//		printf("is not a member.\n");
//}

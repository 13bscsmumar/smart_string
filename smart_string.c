#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int choice = 10;
	char a;
	int b;
	int size = 0;
	std::vector<char> v ;
	while (1)
	{
		//system("cls");
		printf("\n Choose form the following menu \n 1) append char\n 2) Return Length\n 3) Return char on specifc index\n");
		fflush(stdin);
		scanf("%d",&choice);
		if(choice == 1)
		{
			fflush(stdin);
			printf("\nEnter a char\n");
			scanf("%a",&a);
			v.push_back(a);
			printf("\nChar appended\n");
		}
		else if (choice == 2)
		{
			printf("\nThe size is:%d",v.size());
		}
		else if (choice == 3)
		{
			fflush(stdin);
			printf("\nEnter an index\n");
			scanf("%d",&b);
			if (b > v.size() || b < 0 )
			{
				printf("\nERROR!! Index is out of bound\n");
			}
			else{
				for (int i = 0; i<v.size(); i++)
				{
					if (i == b)
					{
						printf("\nThe char on given index is:");
						cout<<v[i];
						break;
					}
				}
			}
		}
		else
		{
			break;
		}
	}
	return 0;
}

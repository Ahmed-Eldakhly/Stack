/*
 ============================================================================
 Name        : main.c
 Author      : Ahmed ElDakhly & Hesham Hafez
 Date        : 10/9/2019
 Description : Stack Exercises
 ============================================================================
 */

/*******************************************************************************
 *                       	Included Libraries                                 *
 *******************************************************************************/
#include"stack.h"
#include"stdio.h"
/*******************************************************************************
 *                       	Main Function		                               *
 *******************************************************************************/
int main(void)
{
	setvbuf(stdout, NULL, _IONBF,0);
	setvbuf(stderr, NULL, _IONBF, 0);
	CreatStack(10);
	uint8 OpenPracetCounter;
	uint8 ClosedPracetCounter;
	uint8 Str[255];
	uint8 NotMatchedFlag;
	while(1)
	{
		NotMatchedFlag=0;
		OpenPracetCounter=0;
		ClosedPracetCounter=0;
			printf("Please enter your expression");
			scanf("%s",Str);
			for(uint8 i=0;Str[i]!='\0';i++)
			{
				if((Str[i]=='(')||(Str[i]=='{')||(Str[i]=='['))
				{
					push(new_stack,Str[i]);
					OpenPracetCounter++;
				}
				else if((Str[i]==')')||(Str[i]=='}')||(Str[i]==']'))
				{
					ClosedPracetCounter++;
					uint8 check=Str[i];
					switch(check)
					{
					case ')':
						if((new_stack->array[new_stack->top])=='(')
						{
							pop(new_stack);
						}
						else
						{
							NotMatchedFlag=1;
							break;
						}
						break;
					case '}':
						if((new_stack->array[new_stack->top])=='{')
						{
							pop(new_stack);

						}
						else
						{
							NotMatchedFlag=1;
							break;
						}
						break;
					case ']':
						if((new_stack->array[new_stack->top])=='[')
						{
							pop(new_stack);
						}
						else
						{
							NotMatchedFlag=1;
							break;
						}
						break;
					}
				}
				if(NotMatchedFlag==1)
				{
					break;
				}
			}
			if(NotMatchedFlag==0)
			{

				if(OpenPracetCounter==ClosedPracetCounter)
				{
					printf("Matched\n");
				}
				else
				{
					NotMatchedFlag=1;
				}
			}
			if(NotMatchedFlag==1)
			{
				printf("Not Matched\n");
			}
	}

	/*setvbuf(stdout, NULL, _IONBF,0);
	setvbuf(stderr, NULL, _IONBF, 0);
	CreatStack(10);
	uint8 OpenPracetCounter=0;
	uint8 ClosedPracetCounter=0;
	uint8 Str[255];
	printf("Please enter your expression");
	scanf("%s",Str);
	for(uint8 i=0;Str[i]!='\0';i++)
	{
		if((Str[i]=='(')||(Str[i]=='{')||(Str[i]=='['))
		{
			push(new_stack,Str[i]);
			OpenPracetCounter++;
		}
		else if((Str[i]==')')||(Str[i]=='}')||(Str[i]==']'))
		{
			ClosedPracetCounter++;
			uint8 check=Str[i];
			switch(check)
			{
			case ')':
				if((new_stack->array[new_stack->top])=='(')
				{
					pop(new_stack);
				}
				else
				{
					printf("Not Matched\n");
					return 0;
				}
				break;
			case '}':
				if((new_stack->array[new_stack->top])=='{')
				{
					pop(new_stack);

				}
				else
				{
					printf("Not Matched\n");
					return 0;
				}
				break;
			case ']':
				if((new_stack->array[new_stack->top])=='[')
				{
					pop(new_stack);
				}
				else
				{
					printf("Not Matched\n");
					return 0;
				}
				break;

			}

		}
	}
	if(OpenPracetCounter==ClosedPracetCounter)
	{
		printf("Matched\n");
	}
	else
	{
		printf("Not Matched\n");
	}
	return 0;*/

	/*uint32 x;
	uint32 Data=0;
	status PopOperation;
	while(1)
	{
		printf("please Select mode\n1-Push\n2-Pop\n3-Exit\n");
		scanf("%d",&x);
		switch(x)
		{
		case Push:
			printf("please enter data to push");
			scanf("%d",&Data);
			status PushOperation=push(new_stack,Data);
			if(PushOperation==FULL)
			{
				printf("Stack is full\n");
			}
			else
			{
				printf("%d is pushed\n",Data);
			}
			break;
		case Pop:
			PopOperation=pop(new_stack);
			if(PopOperation==EMPTY)
			{
				printf("Stack is Empty\n");
			}
			else
			{
				printf("poped\n");
			}
			break;
		case Exit:
			return 0;

		}


	}

	 */

}

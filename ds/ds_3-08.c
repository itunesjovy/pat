#include <stdio.h>
#include <malloc.h>

typedef struct Stack
{
    int top;
    int *elem;
    int length;
}Stack;

Stack* initStack(int length)
{
    Stack *S = malloc(sizeof(Stack));
    S->length = length;
    S->elem = malloc(sizeof(int) * length);
    S->top = 0;
    return S;
}

int isEmpty(Stack *S)
{
    if(S->top == 0)
        return 1;
    else
        return 0;
}

int isFull(Stack *S)
{
    if(S->top == S->length)
        return 1;
    else
        return 0;
}

void push(Stack *S, int elem)
{
    if(isFull(S))
        printf("ERROR:Full\n");
    else
        S->elem[S->top++] = elem;
}

int pop(Stack *S)
{
    if(isEmpty(S))
        return -1;
    else
        return S->elem[--S->top];
}

int main()
{
    int N1, N2, tmp;
    Stack *in, *out;
    char op;
    scanf("%d%d\n", &N1, &N2);

    if(N1 > N2)
    {
        N1 = N1 ^ N2;
        N2 = N1 ^ N2;
        N1 = N1 ^ N2;
    }

    in = initStack(N1);
    out = initStack(N2);

    while((op = getchar()) != 'T')
    {
        getchar();
        if(op == 'A')
        {
            scanf("%d ", &tmp);
            if(!isFull(in))
            {
                push(in, tmp);
            }
            else if(isEmpty(out))
            {
                while(!isEmpty(in))
                    push(out, pop(in));
                push(in, tmp);
            }
            else
                printf("ERROR:Full\n");
        }
        else if(op == 'D')
        {
            if(!isEmpty(out))
                printf("%d\n", pop(out));
            else if(!isEmpty(in))
            {
                while(!isEmpty(in))
                {
                    push(out, pop(in));
                }
                printf("%d\n", pop(out));
            }
            else
                printf("ERROR:Empty\n");
        }
        getchar;
    }
    return 0;
}
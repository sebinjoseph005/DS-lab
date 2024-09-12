;
        else if(inf[i]== '(')
            push(inf[i]);
        else if(inf[i]== ')')
            while(pop() != '(');
        else {
            while(priority(stack[top]) >= priority(inf[i]) { 
                pop();
            }
            push(inf[i]);
        }
    i++;
    }
    while(top >= 0){
        pop();
    }
}

void push(char p) {
    top++;
    stack[top] = p;


int pop() {
    char x;
    x = stack[top];
    if(x != '(')
        printf("%c ",x);
    top--;
    return x;
}

int priority(char element){
    if(element == '^')
        return 3;
    else if(element=='*' || element=='/')
        return 2;
    else if(element=='+' || element=='-')
        return 1;
    else
        return 0;
} 04

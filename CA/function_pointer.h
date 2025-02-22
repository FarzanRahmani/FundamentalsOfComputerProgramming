int _plus2(int a) { return a+2;}
int _mult2(int a) { return a*2;}
int _negate(int a) { return a*-1;}
int _add(int a, int b) {return a+b;}
int _sub(int a, int b) {return a-b;}
int _mul(int a, int b) {return a*b;}
int _div(int a, int b) {return a/b;}
int _max(int a, int b) {return a<b?b:a;}
int _min(int a, int b) {return a<b?a:b;}

typedef int(*fp1)(int);
void apply(int* pn,fp1 pfn)
{
    *pn = pfn(*pn);
}

typedef int(*fp2)(int,int);
void apply2(int a,int b,int* pc,fp2 pfn)
{
    *pc = pfn(a,b);
} 

void apply_fn_list(int* pn,fp1* operations,int size)
{
    fp1 oper;
    for (int i = 0; i < size; i++)
    {
        oper = operations[i];
        *pn = oper(*pn);
    }
}

fp2 get_func(char op)
{
    if(op == '+')
        return _add;
    else
        if(op == '-')
            return _sub;
    else
        if(op == '*')
            return _mul;
    else
        if(op == '/')
            return _div;
    else
        return nullptr;
}


typedef struct _self
{
    typedef _self*(*fps)(_self*);
    int n;
    fps f;
}_self;

_self* self_func(_self* pself)
{
    pself->n++;
    return pself;
}
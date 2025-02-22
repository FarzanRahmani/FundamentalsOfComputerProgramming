
int main(int argc, char const *argv[])
{
    int x = 5;
    if (x%2 == 1)
    {
        x = 6;
    }
    else
    {
        x= 7;
    }
    x = x % 2 == 1 ? 6 : 7 ;

    // switch == chand ta if
    switch (x)
    {
    case 1:
        x += 1;
        break;
    
    case 2:
        x*= 2;
        break;

    case 3:
        x = x*x;
    
    default: // hich kodoom nabashe
        break;
    }


    
    return 0;
}

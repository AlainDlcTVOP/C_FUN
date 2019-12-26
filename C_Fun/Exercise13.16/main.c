# include <stdio.h>


int main(int argc, char const *argv[])
{
   char name[4][2] [11]= {
        "George", "Washington",
        "John", "Adams",
        "Thomas", "Jefferson",
        "James", "Monroe"
    };
    int index =0;
    
    for(; index<4; index++){
        printf("%-6s %-10s\n",name[index][0],name[index][1]);
    }
    return 0;
}




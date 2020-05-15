#include<stdio.h>

typedef enum
{
    red,yellow,blue,white,black

}colors;

typedef enum
{
    VIP,normal,gold,silver
}type;


typedef struct
{
    int house_number;
    int road;
    char city;

}address;

typedef struct
{
    char name[20];
    int sellerId;
    type type;
    address address;
}seller;

typedef struct
{
    int product_id;
    char name[20];
    char produced_date[20];
    char expired_date[20];
    int seller_Id;
    colors colors;
}product;



void main()
{
}

#include <stdio.h>
#include <stdlib.h>//memorija allocate i ostalo

typedef struct{
    unsigned short width;
    unsigned short height;
    unsigned short **data;// pokazivac na pokazivac na short, prvi je pokazivac na niz short, a drugo na takve nizove
}SimpleImage;

SimpleImage* createImage(unsigned short width, unsigned short height){
    unsigned short y, x;

    SimpleImage *img = malloc(sizeof(SimpleImage));
    img->data = malloc(height * sizeof(unsigned short *));

    img->width = width;
    img->height = height;

    for(y = 0; y < height; y++){
        img->data[y] = malloc(width * sizeof(unsigned short));

        for(x = 0; x < width; x++){
            img->data[y][x] = 0;
        }
    }

    return img;
}

void setPixel(SimpleImage *img, unsigned short x, unsigned short y, unsigned short val){
    if (x >=img->width){
        return;
    }
    if (y >=img->height){
        return;
    }

    img->data[y][x] = val % 256;// moduo koji ogranicava na max 255
}

char getValueAsSymbol(unsigned short val){
    if (val <  25) return ' ';
    if (val <  50) return '.';
    if (val <  75) return '=';
    if (val < 125) return '*';
    if (val < 200) return '#';
    return                '@';
}

void print(SimpleImage *img){
    unsigned short y, x;

    printf("\n");

    for (y =0; y < img->height; y++){
        for(x =0; x < img ->width; x++){
            printf("%c", getValueAsSymbol(img->data[y][x]));
        }

        printf("\n");
    }
    printf("\n");
}

void invert(SimpleImage *img){
    unsigned short y, x;

    for (y =0; y < img->height; y++){
        for(x =0; x < img ->width; x++){
            img->data[y][x] = 255 - img->data[y][x] ;// invertovanje
        }

    }

}

void main(){
    SimpleImage *img1 = createImage(7, 6);

    setPixel(img1, 2, 0, 250);
    setPixel(img1, 3, 0, 250);
    setPixel(img1, 4, 0, 250);

    setPixel(img1, 1, 1, 250);
    setPixel(img1, 2, 1, 100);
    setPixel(img1, 4, 1, 100);
    setPixel(img1, 5, 1, 250);

    setPixel(img1, 1, 2, 250);
    setPixel(img1, 3, 2,  50);
    setPixel(img1, 5, 2, 250);

    setPixel(img1, 2, 3, 175);
    setPixel(img1, 4, 3, 175);

    setPixel(img1, 2, 4, 160);
    setPixel(img1, 3, 4, 160);
    setPixel(img1, 4, 4, 160);


    print(img1);

    invert (img1);

    print (img1);

}

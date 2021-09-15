#include <stdio.h>
#include <stdbool.h>

struct box
{
    // fill param
    bool opaque_hidden :1;
    unsigned int fillColor :3;
    unsigned int :4;
    // border param
    bool shown_hidden :1;
    unsigned int borderColor :3;
    unsigned int style :2;
    unsigned int :2;
};

const char * color[8] = {"Black", "Red", "Green", "Yellow", "Blue", "Magenta", "Cyan", "White"};
const char * borderStyle[3] = {"Solid", "Dotted", "Dashed"};

void settings(struct box *b)
{
    printf("Box is: %s\n", b->opaque_hidden == true ? "Opaque" : "Transparent");
    printf("Box color is: %s\n", color[b->fillColor]);
    printf("Border is: %s\n", b->shown_hidden == true ? "Shown" : "Hidden");
    printf("Border color is: %s\n", color[b->borderColor]);
    printf("Border style is: %s\n\n", borderStyle[b->style]);
}


int main()
{
    struct box original = {false, 2, false, 6, 2};
    settings(&original);

    original.opaque_hidden = true;
    original.fillColor = 7;
    original.shown_hidden = false;
    original.borderColor = 0;
    original.style = 0;

    settings(&original);

    return 0;
}



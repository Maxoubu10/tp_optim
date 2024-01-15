void copy(int w, int h, unsigned char *src, unsigned char *dest) {
    int i, j;
    unsigned char *srcPtr = src;
    unsigned char *destPtr = dest;

    for (j = 0; j < h; ++j) {
        for (i = 0; i < w; ++i) {
            *destPtr++ = *srcPtr++;
        }
    }
}

void light(int w, int h, unsigned char *img, unsigned char val) {
    int i, j;
    unsigned char *imgPtr = img;

    for (j = 0; j < h; ++j) {
        for (i = 0; i < w; ++i) {
            int temp = *imgPtr + val;
            *imgPtr++ = (temp > 255) ? 255 : temp;
        }
    }
}

void curve(int w, int h, unsigned char *img, unsigned char *lut) {
    int i, j;
    unsigned char *imgPtr = img;

    for (j = 0; j < h; ++j) {
        for (i = 0; i < w; ++i) {
            *imgPtr = lut[*imgPtr];
            imgPtr++;
        }
    }
}

void transfo(int w, int h, unsigned char *src, unsigned char *dest, unsigned char *lut, unsigned char val)
{
  	copy(w, h, src, dest);
  	curve(w, h, dest, lut);
  	light(w, h, dest, val);
}
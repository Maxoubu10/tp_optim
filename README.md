# Initial version

```bash
image1.pgm courbe1.amp 5 image1_t.pgm
image1.pgm: 5617 x 3684 = 20693028 pixels
2015816944.000000 clock cycles.
image2.pgm courbe2.amp 5 image2_t.pgm
image2.pgm: 5227 x 3515 = 18372905 pixels
1922095529.000000 clock cycles.
image3.pgm courbe3.amp 5 image3_t.pgm
image3.pgm: 6660 x 9185 = 61172100 pixels
6163339175.000000 clock cycles.
image4.pgm courbe4.amp 4 image4_t.pgm
image4.pgm: 3381 x 4914 = 16614234 pixels
1386916389.000000 clock cycles.
image5.pgm courbe5.amp 7 image5_t.pgm
image5.pgm: 3226 x 3255 = 10500630 pixels
876314740.000000 clock cycles.
image6.pgm courbe6.amp 6 image6_t.pgm
image6.pgm: 3677 x 3677 = 13520329 pixels
1239620759.000000 clock cycles.
image7.pgm courbe7.amp 9 image7_t.pgm
image7.pgm: 3264 x 4896 = 15980544 pixels
1441456323.000000 clock cycles.
image8.pgm courbe8.amp 5 image8_t.pgm
image8.pgm: 1757 x 2636 = 4631452 pixels
319717133.000000 clock cycles.
image9.pgm courbe9.amp 7 image9_t.pgm
image9.pgm: 2498 x 3330 = 8318340 pixels
679872574.000000 clock cycles.
image10.pgm courbe10.amp 9 image10_t.pgm
image10.pgm: 3024 x 3024 = 9144576 pixels
742769770.000000 clock cycles.
TOTAL: 16787919336.000000 clock cycles.

real    0m18.388s
user    0m16.906s
sys     0m1.109s
```

# After changing the transfo.c file

```bash
image1.pgm courbe1.amp 5 image1_t.pgm
image1.pgm: 5617 x 3684 = 20693028 pixels
524322046.000000 clock cycles.
image2.pgm courbe2.amp 5 image2_t.pgm
image2.pgm: 5227 x 3515 = 18372905 pixels
401452058.000000 clock cycles.
image3.pgm courbe3.amp 5 image3_t.pgm
image3.pgm: 6660 x 9185 = 61172100 pixels
1356715912.000000 clock cycles.
image4.pgm courbe4.amp 4 image4_t.pgm
image4.pgm: 3381 x 4914 = 16614234 pixels
290543977.000000 clock cycles.
image5.pgm courbe5.amp 7 image5_t.pgm
image5.pgm: 3226 x 3255 = 10500630 pixels
190209337.000000 clock cycles.
image6.pgm courbe6.amp 6 image6_t.pgm
image6.pgm: 3677 x 3677 = 13520329 pixels
234819406.000000 clock cycles.
image7.pgm courbe7.amp 9 image7_t.pgm
image7.pgm: 3264 x 4896 = 15980544 pixels
302118765.000000 clock cycles.
image8.pgm courbe8.amp 5 image8_t.pgm
image8.pgm: 1757 x 2636 = 4631452 pixels
80736077.000000 clock cycles.
image9.pgm courbe9.amp 7 image9_t.pgm
image9.pgm: 2498 x 3330 = 8318340 pixels
148490804.000000 clock cycles.
image10.pgm courbe10.amp 9 image10_t.pgm
image10.pgm: 3024 x 3024 = 9144576 pixels
158302668.000000 clock cycles.
TOTAL: 3687711050.000000 clock cycles.

real    0m12.065s
user    0m10.891s
sys     0m1.047s
```
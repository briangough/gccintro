#if FOO
   int x = 1;
#elsif BAR   /* should be #elif */
   int x = 2;
#else     
   int x = 3;
#endif

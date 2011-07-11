void 
set_fpu (unsigned int mode)
{
  asm ("fldcw %0" : : "m" (*&mode));
}

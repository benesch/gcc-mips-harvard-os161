/* Test the `vqmovnu64' ARM Neon intrinsic.  */
/* This file was autogenerated by neon-testgen.  */

/* { dg-do assemble } */
/* { dg-require-effective-target arm_neon_ok } */
/* { dg-options "-save-temps -O0" } */
/* { dg-add-options arm_neon } */

#include "arm_neon.h"

void test_vqmovnu64 (void)
{
  uint32x2_t out_uint32x2_t;
  uint64x2_t arg0_uint64x2_t;

  out_uint32x2_t = vqmovn_u64 (arg0_uint64x2_t);
}

/* { dg-final { scan-assembler "vqmovn\.u64\[ 	\]+\[dD\]\[0-9\]+, \[qQ\]\[0-9\]+!?\(\[ 	\]+@\[a-zA-Z0-9 \]+\)?\n" } } */
/* { dg-final { cleanup-saved-temps } } */

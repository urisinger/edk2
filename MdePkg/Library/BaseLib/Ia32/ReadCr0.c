/** @file
  AsmReadCr0 function

  Copyright (c) 2006 - 2007, Intel Corporation<BR>
  All rights reserved. This program and the accompanying materials
  are licensed and made available under the terms and conditions of the BSD License
  which accompanies this distribution.  The full text of the license may be found at
  http://opensource.org/licenses/bsd-license.php

  THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,
  WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.

**/

//
// Include common header file for this module.
//


/**
  Reads the current value of the Control Register 0 (CR0).

  Reads and returns the current value of CR4. This function is only available
  on IA-32 and X64. This returns a 32-bit value on IA-32 and a 64-bit value on
  X64.

  @return The value of the Control Register 0 (CR0).

**/
UINTN
EFIAPI
AsmReadCr0 (
  VOID
  )
{
  __asm {
    mov     eax, cr0
  }
}

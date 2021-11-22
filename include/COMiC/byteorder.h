#include <COMiC/types.h>

#ifndef COMiC_CHAR_H
#define COMiC_CHAR_H

static inline COMiC_bool COMiC_BO_IsBigEndian(void)
{
    COMiC_byte a = 1;
    COMiC_uint16 b = 1;

    return *(COMiC_byte *)&b == a ? COMiC_FALSE : COMiC_TRUE;
}

#endif /* COMiC_CHAR_H */

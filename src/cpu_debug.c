#include "header.h"
#include "register.h"

RETURN_DEFINE cpu_debug_stri(PARAMS_DEFINE)
{
    VALIDATE_NOT_DUALITY
    AUX_USE_ANY_PARAM
    tape_output_serial_2(STRI, AUX);
    return RETURN_OK;
}

RETURN_DEFINE cpu_debug_strc(PARAMS_DEFINE)
{
    VALIDATE_NOT_DUALITY
    AUX_USE_ANY_PARAM
    tape_output_serial_2(STRC, AUX);
    return RETURN_OK;
}

RETURN_DEFINE cpu_debug_stro(PARAMS_DEFINE)
{
    VALIDATE_NOT_DUALITY
    AUX_USE_ANY_PARAM
    tape_output_serial_2(STRO, AUX);
    return RETURN_OK;
}

RETURN_DEFINE cpu_debug_strx(PARAMS_DEFINE)
{
    VALIDATE_NOT_DUALITY
    AUX_USE_ANY_PARAM
    tape_output_serial_2(STRX, AUX);
    return RETURN_OK;
}

RETURN_DEFINE cpu_debug_stru(PARAMS_DEFINE)
{
    VALIDATE_NOT_DUALITY
    AUX_USE_ANY_PARAM
    tape_output_serial_2(STRU, AUX);
    return RETURN_OK;
}
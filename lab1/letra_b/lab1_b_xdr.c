/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "lab1_b.h"

bool_t
xdr_vetor (XDR *xdrs, vetor *objp)
{
	register int32_t *buf;

	 if (!xdr_array (xdrs, (char **)&objp->vetor_val, (u_int *) &objp->vetor_len, ~0,
		sizeof (float), (xdrproc_t) xdr_float))
		 return FALSE;
	return TRUE;
}

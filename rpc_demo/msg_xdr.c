/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "msg.h"

bool_t
xdr_messagelist(xdrs, objp)
	XDR *xdrs;
	messagelist *objp;
{

	if (!xdr_string(xdrs, &objp->name, 255))
		return (FALSE);
	if (!xdr_int(xdrs, &objp->count))
		return (FALSE);
	if (!xdr_pointer(xdrs, (char **)&objp->next, sizeof(messagelist), (xdrproc_t)xdr_messagelist))
		return (FALSE);
	return (TRUE);
}
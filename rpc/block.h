/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _BLOCK_H_RPCGEN
#define _BLOCK_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct blockTrans {
	int exit;
	char *out;
};
typedef struct blockTrans blockTrans;

#define GLUSTER_BLOCK 21215311
#define GLUSTER_BLOCK_VERS 1

#if defined(__STDC__) || defined(__cplusplus)
#define BLOCK_EXEC 1
extern  blockTrans * block_exec_1(char **, CLIENT *);
extern  blockTrans * block_exec_1_svc(char **, struct svc_req *);
extern int gluster_block_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define BLOCK_EXEC 1
extern  blockTrans * block_exec_1();
extern  blockTrans * block_exec_1_svc();
extern int gluster_block_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_blockTrans (XDR *, blockTrans*);

#else /* K&R C */
extern bool_t xdr_blockTrans ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_BLOCK_H_RPCGEN */

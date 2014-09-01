/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _NLM_SM_INTER_H_RPCGEN
#define _NLM_SM_INTER_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif

#define SM_MAXSTRLEN 1024
#define SM_PRIV_SIZE 16

struct nlm_sm_notify {
	char *mon_name;
	int state;
	char priv[SM_PRIV_SIZE];
};
typedef struct nlm_sm_notify nlm_sm_notify;

#define NLM_SM_PROG 100021
#define NLM_SM_VERS3 3

#if defined(__STDC__) || defined(__cplusplus)
#define NLM_SM_NOTIFY 16
extern  void * nlm_sm_notify_3(struct nlm_sm_notify *, CLIENT *);
extern  void * nlm_sm_notify_3_svc(struct nlm_sm_notify *, struct svc_req *);
extern int nlm_sm_prog_3_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define NLM_SM_NOTIFY 16
extern  void * nlm_sm_notify_3();
extern  void * nlm_sm_notify_3_svc();
extern int nlm_sm_prog_3_freeresult ();
#endif /* K&R C */
#define NLM_SM_VERS4 4

#if defined(__STDC__) || defined(__cplusplus)
extern  void * nlm_sm_notify_4(struct nlm_sm_notify *, CLIENT *);
extern  void * nlm_sm_notify_4_svc(struct nlm_sm_notify *, struct svc_req *);
extern int nlm_sm_prog_4_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
extern  void * nlm_sm_notify_4();
extern  void * nlm_sm_notify_4_svc();
extern int nlm_sm_prog_4_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_nlm_sm_notify (XDR *, nlm_sm_notify*);

#else /* K&R C */
extern bool_t xdr_nlm_sm_notify ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_NLM_SM_INTER_H_RPCGEN */

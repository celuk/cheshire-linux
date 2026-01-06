#ifndef _BUSYBOX_PKT_SCHED_H
#define _BUSYBOX_PKT_SCHED_H

#include_next <linux/pkt_sched.h>

#ifndef TCA_CBQ_MAX
enum {
	TCA_CBQ_UNSPEC,
	TCA_CBQ_LSSOPT,
	TCA_CBQ_WRROPT,
	TCA_CBQ_FOPT,
	TCA_CBQ_OVL_STRATEGY,
	TCA_CBQ_RATE,
	TCA_CBQ_RTAB,
	TCA_CBQ_POLICE,
	__TCA_CBQ_MAX,
};
#define TCA_CBQ_MAX	(__TCA_CBQ_MAX - 1)

#define TCF_CBQ_LSS_BOUNDED	1
#define TCF_CBQ_LSS_ISOLATED	2

struct tc_cbq_lssopt {
	unsigned char change;
	unsigned char flags;
	unsigned char  s_created;
	unsigned char  s_obs;
	unsigned int   maxidle;
	unsigned int   minidle;
	unsigned int   offtime;
	unsigned int   avpkt;
};

#define TC_CBQ_MAXPRIO 7
#define TC_CBQ_MINPRIO 0

struct tc_cbq_wrropt {
	unsigned char flags;
	unsigned char priority;
	unsigned char cpriority;
	unsigned char __reserved;
	unsigned int  allot;
	unsigned int  weight;
};

struct tc_cbq_fopt {
	unsigned int split;
	unsigned int defmap;
	unsigned int defchange;
};

#define	TC_CBQ_OVL_CLASSIC	0
#define	TC_CBQ_OVL_DELAY	1
#define	TC_CBQ_OVL_LOWPRIO	2
#define	TC_CBQ_OVL_DROP		3

struct tc_cbq_ovl {
	unsigned char strategy;
	unsigned char priority2;
	unsigned short pad;
	unsigned int penalty;
};
#endif

#endif

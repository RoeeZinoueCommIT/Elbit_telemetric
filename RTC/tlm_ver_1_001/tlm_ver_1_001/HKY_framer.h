#ifndef C_HKY_FRAMER_H
#define C_HKY_FRAMER_H

/* Include file list */

/* Exported Constants */


/* Exported Macros */


/* Exported Data type declarations */

typedef struct
{
	short pfd_test1;
	short pfd_test2;
}DT_TLM_hky_info;

/* Exported variables */


/* Exported Methods prototypes */

void p_HKY_framer_init(void);
void p_HKY_update_params(void);
DT_TLM_hky_info* p_HKY_get_tlm_info(void);

#endif /* C_HKY_FRAMER_H */
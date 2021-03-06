/*
 *  DO NOT EDIT: automatically built by sp_code.
 * Initialized arrays for loading custom comparison
 * and extractor functions.
 */

#include "comp_spec.h"

/* Comparison function array. */
int (*comp_funcs[])(const void*, const void*, size_t) = {
	jwcmp,
	midnamecmp,
	jwcmp,
	distcmp,
	asgcmp,
	classcmp,
	coauthcmp,
};

/* Missing result array. */
int missing_res[] = {
	JWMISSING, 
	MMISSING, 
	JWMISSING, 
	DISTMISSING, 
	ASGMISSING, 
	NULL, 
	NULL, 
};

/* Extractor index array. */
int extract_idxs[] = {
	SQLITE_DB_INDX_FIRSTNAME, 
	SQLITE_DB_INDX_FIRSTNAME, 
	SQLITE_DB_INDX_LASTNAME, 
	LATLON, 
	ASG_FIELDS, 
	SQLITE_DB_INDX_CLASS, 
	SQLITE_DB_INDX_COAUTHS, 
};

/* Simprof offset array. */
size_t sp_offsets[] = {
	SP_OFFSET(fname), 
	SP_OFFSET(midname), 
	SP_OFFSET(lname), 
	SP_OFFSET(dist), 
	SP_OFFSET(asg), 
	SP_OFFSET(cl), 
	SP_OFFSET(coauths), 
};


/******************************************************************************
 * CPT220 - Study Period 2 - 2020
 * Startup Code provided by Paul Miller (e70940)
 * Applicant Name:
 ******************************************************************************/
#include "shared.h"
#ifndef ALGORITHM_H
#define ALGORITHM_H
/**
 * The indexes of the cash register array that contain each denomination
 **/
enum denom_ind {
    FIVE_CENTS_IND,
    TEN_CENTS_IND,
    TWENTY_CENTS_IND,
    FIFTY_CENTS_IND,
    ONE_DOLLAR_IND,
    TWO_DOLLAR_IND,
    FIVE_DOLLAR_IND,
    TEN_DOLLAR_IND
};

/**
 * the values that each denomination has
 **/
enum denom_val {
    FIVE_CENTS_VAL = 5,
    TEN_CENTS_VAL = 10,
    TWENTY_CENTS_VAL = 20,
    FIFTY_CENTS_VAL = 50,
    ONE_DOLLAR_VAL = 100,
    TWO_DOLLAR_VAL = 200,
    FIVE_DOLLAR_VAL = 500,
    TEN_DOLLAR_VAL = 1000
};

/**
 *
 **/
struct denomination {
    enum denom_ind index;
    enum denom_val value;
    short count;
};

struct currency {
    unsigned char dollars;
    unsigned char cents;
};

#define NUM_DENOMS 8
#define MAX_CHANGES 50
typedef struct denomination cash_register[NUM_DENOMS];
typedef struct currency change_requests[MAX_CHANGES];

struct falsible_register {
    BOOLEAN success;
    cash_register theregister;
};

struct falsible_register can_give_change(const cash_register reg,
                                         const change_requests requests);
#endif

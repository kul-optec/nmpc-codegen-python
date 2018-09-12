/* file generated on 09/12/18 at 22:03:32 */

/*
* ---------------------------------
* Problem specific definitions
* ---------------------------------
*/
#define DIMENSION_INPUT 2
#define DIMENSION_STATE 3
#define DIMENSION_PANOC 100
#define MPC_HORIZON 50
#define SHIFT_INPUT 1.0
/*
* ---------------------------------
* Lagrangian related values, only visible if there are general constraints
* ---------------------------------
*/
/*
* ---------------------------------
* Constraint related values
* ---------------------------------
*/
#define NUMBER_OF_CONSTRAINTS 3
#define DEFAULT_CONSTRAINT_WEIGHT 1
/*
* ---------------------------------
* constants used with double data type
* ---------------------------------
*/
#define real_t double
/* data types have different absolute value functions */ 
#define ABS(x) fabs(x)
/* Machine accuracy of IEEE double */ 
#define MACHINE_ACCURACY DBL_EPSILON
/* large number use with things like indicator functions */ 
#define LARGE 10000000000
/*
* ---------------------------------
* lbgfs solver definitions
* ---------------------------------
*/
#define LBGFS_BUFFER_SIZE 50
/*
* ---------------------------------
* NMPC-PANOC solver definitions
* ---------------------------------
*/
#define PANOC_MAX_STEPS 5000
#define PANOC_MIN_STEPS 0
#define MIN_RESIDUAL (1e-3)
/*
* ---------------------------------
* options used to test:
* ---------------------------------
*/
/*
* ---------------------------------
* Optional features
* ---------------------------------
*/
#define INTEGRATOR_CASADI 1

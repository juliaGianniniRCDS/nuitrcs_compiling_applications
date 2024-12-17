// C script that requires gsl
/* To compile: gcc matrix_gsl.c -std=c99 -lgsl -o matrix_gsl */

#include <config.h>
#include <stdio.h>
#include <stdlib.h>
#include <gsl/gsl_matrix.h>

/* Function to print a gsl_matrix in a human-readable way */

void print_gslmat (const gsl_matrix * m){
	printf("matrix : \n");
	for (int i = 0; i < m->size1; ++i){
		for (int j = 0; j < m->size2; ++j){
			printf ("%g ", gsl_matrix_get (m, i, j));
			printf ("\n");
		}
	}
}

int main (){
	/* Create a matrix with 3 rows and 4 columns */
	
	gsl_matrix * mat = gsl_matrix_alloc (3, 4);

	/* Fill it with random numbers between 0 and 1 */
	for (int i = 0; i < mat->size1; ++i){
		for (int j = 0; j < mat->size2; ++j){
			gsl_matrix_set (mat, i, j, (double)rand()/RAND_MAX);
		}
	}

	/* Display the matrix */
	printf ("Original matrix\n");
	print_gslmat (mat);

	/* Exit */
	gsl_matrix_free (mat);
	return 0;

}
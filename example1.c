#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "suspect.h"

suspect_context("Euler's Method",
	suspect_test("Expect actual to be within epsilon of target",
		float actual = 5.426;
		float epsilon = 0.01;
		float target = 5.00;
		suspect_epsilon(actual,epsilon,target);
	)

	suspect_test("Does not explode",
		suspect_assert("Expected -1 < 0", -1 < 0);
	)

	suspect_test("Knows about Tony",
		suspect_assert("Tony is a dork", 2 < 1);
	)
)

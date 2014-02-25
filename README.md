Suspect
=======

Suspect helps you track down criminal C code. A test like this:

```
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "suspect.h"

suspect_context("Euler's Method",
        suspect_test("Predicts y_{n+1} to within the expected threshhold",
                suspect_assert("Expected 1 < 0", -1 < 0);
        )

        suspect_test("Does not explode",
                suspect_assert("Expected -1 < 0", -1 < 0);
        )

        suspect_test("Knows about Tony",
                suspect_assert("Tony is a dork", 2 < 1);
        )
)
```

can be compiled like this:

```
gcc example1.c
```

and will produce output like this:

```
Euler's Method
        Predicts y_{n+1} to within the expected threshhold Pass
        Does not explode Pass
                Tony is a dork
        Knows about Tony Fail
1 tests failed.
```

#### Inspiration

* [MinUnit](http://www.jera.com/techinfo/jtns/jtn002.html)
* [RSpec](http://rspec.info/)

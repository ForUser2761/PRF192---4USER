# Logical Operator
Logical operators in C are used to combine multiple conditions/constraints. Logical Operators returns either 0 or 1, it depends on whether the expression result is true or false. In C programming for decision-making, we use logical operators.

We have 3 logical operators in the C language:

- **Logical AND ( && )**
- **Logical OR ( || )**
- **Logical NOT ( ! )**

## AND (&&)
| X | Y | X && Y |
| --- | --- | --- |
| 1 | 1 | 1 |
| 1 | 0 | 0 |
| 0 | 1 | 0 |
| 0 | 0 | 0 |

```
1 nửa sự thật thì không phải là sự thật
```

```C
// C program for Logical
// AND Operator
#include <stdio.h>

// Driver code
int main()
{
	int a = 10, b = 20;

	if (a > 0 && b > 0) {
		printf("Both values are greater than 0\n");
	}
	else {
		printf("Both values are less than 0\n");
	}
	return 0;
}

```

## OR (||)
| X | Y | X or Y |
| --- | --- | --- |
| 1 | 1 | 1 |
| 1 | 0 | 1 |
| 0 | 1 | 1 |
| 0 | 0 | 0 |


```C
// C program for Logical
// OR Operator
#include <stdio.h>

// Driver code
int main()
{
	int a = -1, b = 20;

	if (a > 0 || b > 0) {
		printf("Any one of the given value is "
			"greater than 0\n");
	}
	else {
		printf("Both values are less than 0\n");
	}
	return 0;
}

```

## NOT (!)
| X | !X |
| --- | --- |
| 0 | 1 |
| 1 | 0 |

```C
// C program for Logical
// NOT Operator
#include <stdio.h>

// Driver code
int main()
{
	int a = 10, b = 20;

	if (!(a > 0 && b > 0)) {
		// condition returned true but
		// logical NOT operator changed
		// it to false
		printf("Both values are greater than 0\n");
	}
	else {
		printf("Both values are less than 0\n");
	}
	return 0;
}


```
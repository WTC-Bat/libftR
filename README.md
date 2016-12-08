
# libftR
	-	NOTES:
		-	ft_strtrim:
			-	Works with 42FileChecker, but the means seem overly tedious

		-	ft_putchar*:
			-	Doesn't work with unicode. Can try make it work, but it isn't
				necessary for it to work

		-	Some functions, such as 'ft_strncpy', will segfault when a null
			 pointer is given as a parameter. 42FileCheckers requires this. In
			 most cases, this is a simple:
			 if ('var' == NULL)
			 	return (NULL);

		-	ft_toupper & ft_tolower
			-	Both work, but 42FileChecker says they don't. I think 42FC
				 expects unsigned values or some such.
				 
		-	 Errors found with moulitest :(


	-	Branches:
		-	master:		all basic functions. Working.
		-	bonus:		all basic and bonus functions. Working.
		-	extra:		all basic and bonus functions with extra functions
						 added. Working

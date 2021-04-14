#include "libft.h"
#include <stdio.h>

int main ()
{
	printf("FT_ATOI  = %d\n", ft_atoi("-99999999999999999999999999"));
	printf("REAL ATOI = %d\n", atoi("-99999999999999999999999999"));
	printf("FT_ATOI = %d\n", ft_atoi("1"));
	printf("REAL_ATOI = %d\n", atoi("1"));
	printf("FT_ATOI  = %d\n", ft_atoi("19223372036854775807"));
	printf("REAL ATOI = %d\n", atoi("19223372036854775807"));
	printf("FT_ATOI = %d\n", ft_atoi("18446744073709552000"));
	printf("REAL_ATOI = %d\n", atoi("18446744073709552000"));
	printf("FT_ATOI  = %d\n", ft_atoi("18446744073709551999"));
	printf("REAL ATOI = %d\n", atoi("18446744073709551999"));
	printf("FT_ATOI = %d\n", ft_atoi("-0"));
	printf("REAL_ATOI = %d\n", atoi("-0"));
	printf("FT_ATOI  = %d\n", ft_atoi("++5"));
	printf("REAL ATOI = %d\n", atoi("++5"));
	printf("FT_ATOI = %d\n", ft_atoi("+-5"));
	printf("REAL_ATOI = %d\n", atoi("+-5"));
	printf("FT_ATOI  = %d\n", ft_atoi("--5"));
	printf("REAL ATOI = %d\n", atoi("--5"));
	printf("FT_ATOI = %d\n", ft_atoi("00512"));
	printf("REAL_ATOI = %d\n", atoi("00512"));
	printf("FT_ATOI  = %d\n", ft_atoi(""));
	printf("REAL ATOI = %d\n", atoi(""));
	printf("FT_ATOI = %d\n", ft_atoi("23058430092136939529"));
	printf("REAL_ATOI = %d\n", atoi("23058430092136939529"));
	printf("FT_ATOI  = %d\n", ft_atoi("\t\v\r\n\f -5"));
	printf("REAL ATOI = %d\n", atoi("\t\v\r\n\f -5"));
	printf("FT_ATOI = %d\n", ft_atoi("-9223372036854775808"));
	printf("REAL_ATOI = %d\n", atoi("-9223372036854775808"));
	printf("FT_ATOI  = %d\n", ft_atoi("-9223372036854775809"));
	printf("REAL ATOI = %d\n", atoi("-9223372036854775809"));
	printf("FT_ATOI = %d\n", ft_atoi("9223372036854775808"));
	printf("REAL_ATOI = %d\n", atoi("9223372036854775808"));
	printf("FT_ATOI  = %d\n", ft_atoi("9999999999999999999"));
	printf("REAL ATOI = %d\n", atoi("9999999999999999999"));
	printf("FT_ATOI = %d\n", ft_atoi("2147484160"));
	printf("REAL_ATOI = %d\n", atoi("2147484160"));
	printf("FT_ATOI  = %d\n", ft_atoi("6q"));
	printf("REAL ATOI = %d\n", atoi("6q"));
	printf("FT_ATOI = %d\n", ft_atoi("2147483648"));
	printf("REAL_ATOI = %d\n", atoi("2147483648"));
	printf("FT_ATOI  = %d\n", ft_atoi("-2147483648"));
	printf("REAL ATOI = %d\n", atoi("-2147483648"));
	printf("FT_ATOI = %d\n", ft_atoi("2147483647"));
	printf("REAL_ATOI = %d\n", atoi("2147483647"));
	printf("FT_ATOI  = %d\n", ft_atoi("-4294967296"));
	printf("REAL ATOI = %d\n", atoi("-4294967296"));
	printf("FT_ATOI = %d\n", ft_atoi("4294967296"));
	printf("REAL_ATOI = %d\n", atoi("4294967296"));
	printf("FT_ATOI  = %d\n", ft_atoi("4294967295"));
	printf("REAL ATOI = %d\n", atoi("4294967295"));
	printf("FT_ATOI = %d\n", ft_atoi("-1"));
	printf("REAL_ATOI = %d\n", atoi("-1"));
	printf("FT_ATOI = %d\n", ft_atoi("0"));
	printf("REAL_ATOI = %d\n", atoi("0"));

	return (0);
}

#include "../libft.h"
#include <stdio.h>

void ft_isalpha_tester()
{
	printf("ft_isalpha_tester\n");
	printf("ft_isalpha('a') = %d %s\n",ft_isalpha('a'));
	printf("ft_isalpha('A') = %d %s\n",ft_isalpha('A'));
	printf("ft_isalpha('z') = %d %s\n",ft_isalpha('z'));
	printf("ft_isalpha('Z') = %d %s\n",ft_isalpha('Z'));
	printf("ft_isalpha('1') = %d %s\n",ft_isalpha('1'));
	printf("ft_isalpha('0') = %d %s\n",ft_isalpha('0'));
	printf("ft_isalpha(' ') = %d %s\n",ft_isalpha(' '));
	printf("ft_isalpha('!') = %d %s\n",ft_isalpha('!'));
	printf("ft_isalpha('[') = %d %s\n",ft_isalpha('['));
	printf("ft_isalpha(']') = %d %s\n",ft_isalpha(']'));
	printf("ft_isalpha(365) = %d %s\n",ft_isalpha(365));
	printf("ft_isalpha(0) = %d %s\n",ft_isalpha(0));
}

void ft_isdigit_tester()
{
	printf("ft_isdigit_tester\n");
	printf("ft_isdigit('a') = %d %s\n",ft_isdigit('a'));
	printf("ft_isdigit('A') = %d %s\n",ft_isdigit('A'));
	printf("ft_isdigit('z') = %d %s\n",ft_isdigit('z'));
	printf("ft_isdigit('Z') = %d %s\n",ft_isdigit('Z'));
	printf("ft_isdigit('1') = %d %s\n",ft_isdigit('1'));
	printf("ft_isdigit('0') = %d %s\n",ft_isdigit('0'));
	printf("ft_isdigit('8') = %d %s\n",ft_isdigit('8'));
	printf("ft_isdigit(' ') = %d %s\n",ft_isdigit(' '));
	printf("ft_isdigit('!') = %d %s\n",ft_isdigit('!'));
	printf("ft_isdigit('[') = %d %s\n",ft_isdigit('['));
	printf("ft_isdigit(']') = %d %s\n",ft_isdigit(']'));
	printf("ft_isdigit(365) = %d %s\n",ft_isdigit(365));
	printf("ft_isdigit(0) = %d %s\n",ft_isdigit(0));
}

void ft_isalnum_tester()
{
	printf("ft_isalnum_tester\n");
	printf("ft_isalnum('a') = %d %s\n",ft_isalnum('a'));
	printf("ft_isalnum('A') = %d %s\n",ft_isalnum('A'));
	printf("ft_isalnum('z') = %d %s\n",ft_isalnum('z'));
	printf("ft_isalnum('Z') = %d %s\n",ft_isalnum('Z'));
	printf("ft_isalnum('1') = %d %s\n",ft_isalnum('1'));
	printf("ft_isalnum('0') = %d %s\n",ft_isalnum('0'));
	printf("ft_isalnum('8') = %d %s\n",ft_isalnum('8'));
	printf("ft_isalnum(' ') = %d %s\n",ft_isalnum(' '));
	printf("ft_isalnum('!') = %d %s\n",ft_isalnum('!'));
	printf("ft_isalnum('[') = %d %s\n",ft_isalnum('['));
	printf("ft_isalnum(']') = %d %s\n",ft_isalnum(']'));
	printf("ft_isalnum(365) = %d %s\n",ft_isalnum(365));
	printf("ft_isalnum(0) = %d %s\n",ft_isalnum(0));
}

void ft_isascii_tester()
{
	printf("ft_isascii_tester\n");
	printf("ft_isascii('a') = %d %s\n",ft_isascii('a'))
	printf("ft_isascii('A') = %d %s\n",ft_isascii('A'))
	printf("ft_isascii('z') = %d %s\n",ft_isascii('z'))
	printf("ft_isascii('Z') = %d %s\n",ft_isascii('Z'))
	printf("ft_isascii('1') = %d %s\n",ft_isascii('1'))
	printf("ft_isascii('0') = %d %s\n",ft_isascii('0'))
	printf("ft_isascii('8') = %d %s\n",ft_isascii('8'))
	printf("ft_isascii(' ') = %d %s\n",ft_isascii(' '))
	printf("ft_isascii('!') = %d %s\n",ft_isascii('!'))
	printf("ft_isascii('[') = %d %s\n",ft_isascii('['))
	printf("ft_isascii(']') = %d %s\n",ft_isascii(']'))
	printf("ft_isascii(365) = %d %s\n",ft_isascii(365))
	printf("ft_isascii(0) = %d %s\n",ft_isascii(0));
}

void ft_isprint_tester()
{
	printf("ft_isprint_tester\n");
	printf("ft_isprint('a') = %d %s\n",ft_isprint('a'));
	printf("ft_isprint('A') = %d %s\n",ft_isprint('A'));
	printf("ft_isprint('z') = %d %s\n",ft_isprint('z'));
	printf("ft_isprint('Z') = %d %s\n",ft_isprint('Z'));
	printf("ft_isprint('1') = %d %s\n",ft_isprint('1'));
	printf("ft_isprint('0') = %d %s\n",ft_isprint('0'));
	printf("ft_isprint('8') = %d %s\n",ft_isprint('8'));
	printf("ft_isprint(' ') = %d %s\n",ft_isprint(' '));
	printf("ft_isprint('!') = %d %s\n",ft_isprint('!'));
	printf("ft_isprint('[') = %d %s\n",ft_isprint('['));
	printf("ft_isprint(']') = %d %s\n",ft_isprint(']'));
	printf("ft_isprint(365) = %d %s\n",ft_isprint(365));
	printf("ft_isprint(0) = %d %s\n",ft_isprint(0));
}

void ft_strlen_tester()
{
	printf("ft_strlen_tester\n");
	printf("ft_strlen('') = %zu %s\n",ft_strlen(""));
	printf("ft_strlen('a') = %zu %s\n",ft_strlen("a"));
	printf("ft_strlen('ab') = %zu %s\n",ft_strlen("ab"));
	printf("ft_strlen('abc') = %zu %s\n",ft_strlen("abc"));
	printf("ft_strlen('abcd') = %zu %s\n",ft_strlen("abcd"));
	printf("ft_strlen('abcde') = %zu %s\n",ft_strlen("abcde"));
	printf("ft_strlen('abcdef') = %zu %s\n",ft_strlen("abcdef"));
	printf("ft_strlen('abcdefg') = %zu %s\n",ft_strlen("abcdefg"));
	printf("ft_strlen('abcdefgh') = %zu %s\n",ft_strlen("abcdefgh"));
	printf("ft_strlen('abcdefghi') = %zu %s\n",ft_strlen("abcdefghi"));
	printf("ft_strlen('abcdefghij') = %zu %s\n",ft_strlen("abcdefghij"));
	printf("ft_strlen('abcdefghijk') = %zu %s\n",ft_strlen("abcdefghijk"));
	printf("ft_strlen('Hola mundo') = %zu %s\n",ft_strlen("Hola mundo"));
}

void ft_toupper_tester()
{
	printf("ft_toupper_tester\n");
	printf("ft_toupper('a') = %d %s\n",ft_toupper('a'));
	printf("ft_toupper('A') = %d %s\n",ft_toupper('A'));
	printf("ft_toupper('z') = %d %s\n",ft_toupper('z'));
	printf("ft_toupper('Z') = %d %s\n",ft_toupper('Z'));
	printf("ft_toupper('1') = %d %s\n",ft_toupper('1'));
	printf("ft_toupper('0') = %d %s\n",ft_toupper('0'));
	printf("ft_toupper('8') = %d %s\n",ft_toupper('8'));
	printf("ft_toupper(' ') = %d %s\n",ft_toupper(' '));
	printf("ft_toupper('!') = %d %s\n",ft_toupper('!'));
	printf("ft_toupper('[') = %d %s\n",ft_toupper('['));
	printf("ft_toupper(']') = %d %s\n",ft_toupper(']'));
}

void ft_tolower_tester()
{
	printf("ft_tolower_tester\n");
	printf("ft_tolower('a') = %d %s\n",ft_tolower('a'));
	printf("ft_tolower('A') = %d %s\n",ft_tolower('A'));
	printf("ft_tolower('z') = %d %s\n",ft_tolower('z'));
	printf("ft_tolower('Z') = %d %s\n",ft_tolower('Z'));
	printf("ft_tolower('1') = %d %s\n",ft_tolower('1'));
	printf("ft_tolower('0') = %d %s\n",ft_tolower('0'));
	printf("ft_tolower('8') = %d %s\n",ft_tolower('8'));
	printf("ft_tolower(' ') = %d %s\n",ft_tolower(' '));
	printf("ft_tolower('!') = %d %s\n",ft_tolower('!'));
	printf("ft_tolower('[') = %d %s\n",ft_tolower('['));
	printf("ft_tolower(']') = %d %s\n",ft_tolower(']'));
	printf("ft_tolower(365) = %d %s\n",ft_tolower(365));
	printf("ft_tolower(0) = %d %s\n",ft_tolower(0));
}

void ft_strncmp_tester()
{
	printf("ft_strncmp_tester\n");
	printf("ft_strncmp('abc', 'abc', 3) = %d %s\n", ft_strncmp("abc", "abc", 3), ft_strncmp("abc", "abc", 3));
	printf("ft_strncmp('abc', 'abd', 3) = %d %s\n", ft_strncmp("abc", "abd", 3), ft_strncmp("abc", "abd", 3));
	printf("ft_strncmp('abc', 'ab', 3) = %d %s\n", ft_strncmp("abc", "ab", 3), ft_strncmp("abc", "ab", 3));
	printf("ft_strncmp('abc', 'abcd', 3) = %d %s\n", ft_strncmp("abc", "abcd", 3), ft_strncmp("abc", "abcd", 3));
	printf("ft_strncmp('abc', 'abc', 2) = %d %s\n", ft_strncmp("abc", "abc", 2), ft_strncmp("abc", "abc", 2));
	printf("ft_strncmp('abc', 'abd', 2) = %d %s\n", ft_strncmp("abc", "abd", 2), ft_strncmp("abc", "abd", 2));
	printf("ft_strncmp('abc', 'ab', 2) = %d %s\n", ft_strncmp("abc", "ab", 2), ft_strncmp("abc", "ab", 2));
	printf("ft_strncmp('abc', 'abcd', 2) = %d %s\n", ft_strncmp("abc", "abcd", 2), ft_strncmp("abc", "abcd", 2));
}


void ft_strchr_tester()
{
	printf("ft_strchr_tester\n");
	char *str = "Hola Mundo!";
	printf("String: %s\n", str);
	char *ptr = ft_strchr(str, 'o');
	printf("Buscando 'o' en %s\n", str);
	if (ptr != NULL)
		printf("Caracter 'o' encontrado en la posicion %ld, devuelto %s\n", ptr - str, ptr);
	else
		printf("Caracter 'o' no encontrado\n");
	
	ptr = ft_strchr(str, 'z');
	printf("Buscando 'z' en %s\n", str);
	if (ptr != NULL)
		printf("Caracter 'z' encontrado en la posicion %ld\n", ptr - str);
	else
		printf("Caracter 'z' no encontrado\n");
}

void ft_strrchr_tester()
{
	printf("ft_strrchr_tester\n");
	char *str = "Hola Mundo!";
	printf("Cadena: %s\n", str);
	char *ptr = ft_strrchr(str, 'o');
	printf("Buscando 'o' en %s\n", str);
	if (ptr != NULL)
		printf("Caracter 'o' encontrado en la posicion %ld, devuleto %s\n", ptr - str, ptr);
	else
		printf("Caracter 'o' no encontrado\n");
	
	ptr = ft_strrchr(str, 'z');
	printf("Buscando 'z' en %s\n", str);
	if (ptr != NULL)
		printf("Caracter 'z' encontrado en la posicion %ld\n", ptr - str);
	else
		printf("Caracter 'z' no encontrado\n");
}

#include <stdio.h>
#include <string.h>

void ft_memset_tester()
{
	printf("ft_memset_tester\n");
	
	char str[20] = "Hola Mundo!";
	printf("Antes memset: %s\n", str);
	
	memset(str, '*', 5);
	printf("Después memset: %s\n", str);
}

void ft_bzero_tester()
{
	printf("ft_bzero_tester\n");
	
	char str[20] = "Hola Mundo!";
	printf("Antes de ft_bzero: %s\n", str);
	
	ft_bzero(str, 5);
	printf("Después de ft_bzero: %s\n", str);
}

void ft_memchr_tester()
{
	printf("ft_memchr_tester\n");
	
	char str[] = "texto español";
	char *ptr = ft_memchr(str, 'a', strlen(str));
	printf("Buscando 'a' en %s\n", str);
	if (ptr != NULL)
		printf("Caracter 'a' encontrado en la posición %ld\n", ptr - str);
	else
		printf("Caracter 'a' no encontrado\n");
	
	ptr = ft_memchr(str, 'z', strlen(str));
	printf("Buscando 'z' en %s\n", str);
	if (ptr != NULL)
		printf("Caracter 'z' encontrado en la posición %ld\n", ptr - str);
	else
		printf("Caracter 'z' no encontrado\n");
}

void ft_memcpy_tester()
{
	printf("ft_memcpy_tester\n");
	
	char src[] = "Hola Mundo";
	char dest[20];
	
	printf("Antes memcpy: %s\n", dest);
	
	ft_memcpy(dest, src, strlen(src) + 1);
	
	printf("Después memcpy: %s\n", dest);

}

void ft_memcmp_tester()
{
	printf("ft_memcmp_tester\n");
	
	char str1[] = "Hola Mundo!";
	char str2[] = "texto en español";
	char str3[] = "Hola Mundo!";
	
	int result = ft_memcmp(str1, str2, strlen(str1));
	int result2 = ft_memcmp(str1, str3, strlen(str1));
	
	if (result == 0)
		printf("Las cadenas son iguales\n");
	else if (result < 0)
		printf("La cadena 1 es menor que la cadena 2\n");
	else
		printf("La cadena 1 es mayor que la cadena 2\n");

	if (result2 == 0)
		printf("Las cadenas son iguales\n");
	else if (result2 < 0)
		printf("La cadena 1 es menor que la cadena 2\n");
	else
		printf("La cadena 1 es mayor que la cadena 2\n");


}

void ft_memmove_tester()
{
	printf("ft_memmove_tester\n");
	
	char str[] = "Hola Mundo!";
	char dest[20];
	
	printf("Antes memmove: %s\n", dest);
	
	ft_memmove(dest, str, strlen(str) + 1);
	
	printf("Después memmove: %s\n", dest);
}

void ft_strlcpy_tester()
{
	printf("ft_strlcpy_tester\n");
	
	char src[] = "texto en español";
	char dest[20];
	
	printf("Antes strlcpy: %s\n", dest);
	
	size_t len = ft_strlcpy(dest, src, sizeof(dest));
	
	printf("Después strlcpy: %s\n", dest);
	printf("Longitud copiada: %zu\n", len);
}

void ft_strnstr_tester()
{
	printf("ft_strnstr_tester\n");
	
	char str[] = "Hola mundo";
	char search[] = "mundo";
	
	char *result = ft_strnstr(str, search, strlen(str));
	
	if (result != NULL)
		printf("Texto encontrado en indice: %ld\n", result - str);
	else
		printf("Texto no encontrado\n");
}

void ft_strlcat_tester()
{
	printf("ft_strlcat_tester\n");
	
	char src[] = "Hola mundo";
	char dest[20] = "Hello, ";
	
	printf("Antes de strlcat: %s\n", dest);
	
	size_t len = ft_strlcat(dest, src, sizeof(dest));
	
	printf("Después de strlcat: %s\n", dest);
	printf("Longitud de la cadena concatenada: %zu\n", len);
}

void ft_atoi_tester()
{
	printf("ft_atoi_tester\n");
	
	char str1[] = "42";
	char str2[] = "-123";
	char str3[] = "0";
	char str4[] = "abc";
	
	int num1 = ft_atoi(str1);
	int num2 = ft_atoi(str2);
	int num3 = ft_atoi(str3);
	int num4 = ft_atoi(str4);
	
	printf("String: %s, Integer: %d\n", str1, num1);
	printf("String: %s, Integer: %d\n", str2, num2);
	printf("String: %s, Integer: %d\n", str3, num3);
	printf("String: %s, Integer: %d\n", str4, num4);
}

void ft_calloc_tester()
{
	printf("ft_calloc_tester\n");
	
	size_t num_elements = 5;
	size_t element_size = sizeof(int);
	
	int* ptr = ft_calloc(num_elements, element_size);
	
	if (ptr != NULL)
	{
		printf("Memoria asignada correctamente\n");
		
		// Establecer valores en la memoria asignada
		for (size_t i = 0; i < num_elements; i++)
		{
			ptr[i] = i + 1;
		}
		
		// Imprimir los valores
		printf("Valores de la memoria asignada: ");
		for (size_t i = 0; i < num_elements; i++)
		{
			printf("%d ", ptr[i]);
		}
		printf("\n");
		
		// Liberar la memoria asignada
		free(ptr);
	}
	else
	{
		printf("Fallo en la asignación de memoria\n");
	}
}

void ft_strdup_tester()
{
	printf("ft_strdup_tester\n");
	
	char str[] = "Hola mundo";
	
	char* ptr = ft_strdup(str);
	
	if (ptr != NULL)
	{
		printf("String original: %s\n", str);
		printf("String duplicado: %s\n", ptr);
		
		free(ptr);
	}
	else
	{
		printf("Fallo en la asignación de memoria\n");
	}
}

void ft_substr_tester()
{
	printf("ft_substr_tester\n");
	
	char str[] = "Hola mundo";
	
	char* ptr = ft_substr(str, 5, 5);
	
	if (ptr != NULL)
	{
		printf("String original: %s\n", str);
		printf("String substraido: %s\n", ptr);
		
		free(ptr);
	}
	else
	{
		printf("Fallo en la asignación de memoria\n");
	}
}

void ft_strjoin_tester()
{
	printf("ft_strjoin_tester\n");
	
	char str1[] = "Hola ";
	char str2[] = "mundo";
	
	char* ptr = ft_strjoin(str1, str2);
	
	if (ptr != NULL)
	{
		printf("String 1: %s\n", str1);
		printf("String 2: %s\n", str2);
		printf("String concatenado: %s\n", ptr);
		
		free(ptr);
	}
	else
	{
		printf("Fallo en la asignación de memoria\n");
	}
}

void ft_strtrim_tester()
{
	printf("ft_strtrim_tester\n");
	
	char str[] = "   Hola mundo   ";
	char set[] = " ";
	
	char* ptr = ft_strtrim(str, set);
	
	if (ptr != NULL)
	{
		printf("String original: %s\n", str);
		printf("String trim: %s\n", ptr);
		
		free(ptr);
	}
	else
	{
		printf("Fallo en la asignación de memoria\n");
	}
}

void ft_split_tester()
{
	printf("ft_split_tester\n");
	
	char str[] = "Hola mundo";
	char delim = ' ';
	
	char** ptr = ft_split(str, delim);
	
	if (ptr != NULL)
	{
		printf("String original: %s\n", str);
		printf("String separado: %s, %s\n", ptr[0], ptr[1]);
		
		free(ptr[0]);
		free(ptr[1]);
		free(ptr);
	}
	else
	{
		printf("Fallo en la asignación de memoria\n");
	}
}

void ft_itoa_tester()
{
	printf("ft_itoa_tester\n");
	
	int num1 = 123;
	int num2 = -123;
	int num3 = 2147483647;
	
	char* ptr1 = ft_itoa(num1);
	char* ptr2 = ft_itoa(num2);
	char* ptr3 = ft_itoa(num3);
	
	if (ptr1 != NULL && ptr2 != NULL && ptr3 != NULL)
	{
		printf("Integer: %d, String: %s\n", num1, ptr1);
		printf("Integer: %d, String: %s\n", num2, ptr2);
		printf("Integer: %d, String: %s\n", num3, ptr3);
		
		free(ptr1);
		free(ptr2);
		free(ptr3);
	}
	else
	{
		printf("Fallo en la asignación de memoria\n");
	}
}

char ft_modify_char_r(unsigned int index, char c)
{
	if (index % 2 == 0)
	{
		c = ft_toupper(c);
	}
	else
	{
		c = ft_tolower(c);
	}

	return (c);
}

void ft_strmapi_tester()
{
	printf("ft_strmapi_tester\n");
	
	char str[] = "Hola mundo";
	
	char* ptr = ft_strmapi(str, &ft_modify_char_r);
	
	if (ptr != NULL)
	{
		printf("String original: %s\n", str);
		printf("String modificado: %s\n", ptr);
		
		free(ptr);
	}
	else
	{
		printf("Fallo en la asignación de memoria\n");
	}
}

void ft_modify_char(unsigned int index, char *c)
{
	if (index % 2 == 0)
	{
		*c = ft_toupper(*c);
	}
	else
	{
		*c = ft_tolower(*c);
	}
}

void ft_striteri_tester()
{
	printf("ft_striteri_tester\n");
	
	char str[] = "Hello, World!";
	
	ft_striteri(str, &ft_modify_char);
	
	printf("Modified string: %s\n", str);
}

void ft_putchar_fd_tester()
{
	printf("ft_putchar_fd_tester\n");
	
	char c = 'a';
	
	ft_putchar_fd(c, 1);
}

void ft_putstr_fd_tester()
{
	printf("ft_putstr_fd_tester\n");
	
	char str[] = "Hello, World!";
	
	ft_putstr_fd(str, 1);
}

void ft_putendl_fd_tester()
{
	printf("ft_putendl_fd_tester\n");
	
	char str[] = "Hello, World!";
	
	ft_putendl_fd(str, 1);
}

void ft_putnbr_fd_tester()
{
	printf("ft_putnbr_fd_tester\n");
	
	int num = 123;
	
	ft_putnbr_fd(num, 1);
}

void ft_lstnew_tester()
{
	printf("ft_lstnew_tester\n");
	
	t_list *list = ft_lstnew("Hola mundo");

	
	if (list != NULL)
	{
		printf("String: %s\n", list->content);
		
		free(list);
	}
	else
	{
		printf("Fallo en la asignación de memoria\n");
	}
}

void ft_lstadd_front_tester()
{

	printf("ft_lstadd_front_tester\n");

	t_list *list;
	t_list *nodo1 = ft_lstnew("Hola mundo");
	t_list *new_node = ft_lstnew("Hola 42 madrid");
	t_list *nodo3 = ft_lstnew("hola sergio");

	list = nodo1;

	printf("primer añadido\n");
	ft_lstadd_front(&list, new_node);
	while (list != NULL)
	{
		printf("%s --> ", list->content);
		if(list->next == NULL)
			printf(" NULL");
		list = list->next;
	}

	printf("\n");

	list = nodo1;
	ft_lstadd_front(&list, new_node);
	ft_lstadd_front(&list, nodo3);

	printf("segundo añadido\n");
	while (list != NULL)
	{
		printf("%s --> ", list->content);
		if(list->next == NULL)
			printf(" NULL");
		list = list->next;
	}

}

void ft_lstsize_tester()
{
	t_list *list;
	t_list *nodo1 = ft_lstnew("Hola mundo");
	t_list *new_node = ft_lstnew("Hola 42 madrid");
	t_list *nodo3 = ft_lstnew("hola sergio");

	list = nodo1;
	ft_lstadd_front(&list, new_node);
	ft_lstadd_front(&list, nodo3);

	printf("ft_lstsize_tester\n");

	printf("size = %d\n", ft_lstsize(list));
	
}

void ft_lstlast_tester()
{
	t_list *list;
	t_list *nodo1 = ft_lstnew("Hola mundo");
	t_list *new_node = ft_lstnew("Hola 42 madrid");
	t_list *nodo3 = ft_lstnew("hola sergio");

	list = nodo1;
	ft_lstadd_front(&list, new_node);
	ft_lstadd_front(&list, nodo3);

	printf("ft_lstlast_tester\n");

	printf("ultimo = %s\n", ft_lstlast(list)->content);
	
}

void ft_lstadd_back_tester()
{
	t_list *list;
	t_list *nodo1 = ft_lstnew("Hola mundo");
	t_list *new_node = ft_lstnew("Hola 42 madrid");
	t_list *nodo3 = ft_lstnew("hola sergio");

	list = nodo1;
	ft_lstadd_front(&list, new_node);
	ft_lstadd_front(&list, nodo3);

	printf("ft_lstadd_back_tester\n");

	ft_lstadd_back(&list, ft_lstnew("adios sergio"));

	while (list != NULL)
	{
		printf("%s --> ", list->content);
		if(list->next == NULL)
			printf(" NULL");
		list = list->next;
	}
}

void ft_del(void *content)
{
	content = NULL;
}

void ft_lstdelone_tester()
{
	printf("ft_lstdelone_tester\n");
	t_list *tmp_list;
	t_list *nodo1 = ft_lstnew("Hola mundo");
	t_list *new_node = ft_lstnew("Hola 42 madrid");
	t_list *nodo3 = ft_lstnew("hola sergio");

	ft_lstadd_back(&nodo1, new_node);
	ft_lstadd_back(&nodo1, nodo3);


	tmp_list = nodo1;
	printf("pre delete\n");
	while (tmp_list != NULL)
	{
		printf("%s --> ", tmp_list->content);
		if(tmp_list->next == NULL)
			printf(" NULL");
		tmp_list = tmp_list->next;
	}

	printf("\n");
	ft_lstdelone(nodo3, &ft_del);

	tmp_list = nodo1;
	printf("post delete\n");
	while (tmp_list != NULL)
	{
		printf("hola\n");
		printf("%s --> ", tmp_list->content);
		if(tmp_list->next == NULL)
			printf(" NULL");
		tmp_list = tmp_list->next;
	}

}

void ft_lstclear_tester()
{
	t_list *list;
	t_list *nodo1 = ft_lstnew("Hola mundo");
	t_list *new_node = ft_lstnew("Hola 42 madrid");
	t_list *nodo3 = ft_lstnew("hola sergio");

	list = nodo1;
	ft_lstadd_front(&list, new_node);
	ft_lstadd_front(&list, nodo3);

	printf("ft_lstclear_tester\n");

	ft_lstclear(&list, &ft_del);

	if(list)
		printf("list = NULL\n");
	else
		printf("list != NULL\n");
}

void ft_lstiter_f(void *content)
{

	printf("%s\n", (char *)content);
}

void ft_lstiter_tester()
{
	t_list *nodo1 = ft_lstnew("hola mundo");
	t_list *new_node = ft_lstnew("hola 42 madrid");
	t_list *nodo3 = ft_lstnew("hola sergio");

	ft_lstadd_front(&nodo1, new_node);
	ft_lstadd_front(&nodo1, nodo3);

	printf("ft_lstiter_tester\n");

	ft_lstiter(nodo1, ft_lstiter_f);
}

void ft_del_f(void *content)
{
	free(content);
}

void *ft_lstmap_f(void *content)
{
	char *str = (char *)content;
	char *new_str = malloc(sizeof(char) * (strlen(str) + 1));

	if (new_str == NULL)
		return (NULL);

	strcpy(new_str, str);
	new_str[0] = ft_toupper(new_str[0]);

	return (new_str);
}

void ft_lstmap_tester()
{
	t_list *nodo1 = ft_lstnew("hola mundo");
	t_list *new_node = ft_lstnew("hola 42 madrid");
	t_list *nodo3 = ft_lstnew("hola sergio");
	t_list *list;

	ft_lstadd_front(&nodo1, new_node);
	ft_lstadd_front(&nodo1, nodo3);

	printf("ft_lstmap_tester\n");

	list = ft_lstmap(nodo1, &ft_lstmap_f, &ft_del_f);

	while (list != NULL)
	{
		printf("%s --> ", list->content);
		if(list->next == NULL)
			printf(" NULL");
		list = list->next;
	}

}

int main(void)
{
	ft_isalpha_tester();
	printf("\n");
	ft_isdigit_tester();
	printf("\n");
	ft_isalnum_tester();
	printf("\n");
	ft_isascii_tester();
	printf("\n");
	ft_isprint_tester();
	printf("\n");
	ft_strlen_tester();
	printf("\n");
	ft_toupper_tester();
	printf("\n");
	ft_tolower_tester();
	printf("\n");
	ft_strncmp_tester();
	printf("\n");
	ft_strchr_tester();
	printf("\n");
	ft_strrchr_tester();
	printf("\n");
	ft_memset_tester();
	printf("\n");
	ft_bzero_tester();
	printf("\n");	
	ft_memchr_tester();
	printf("\n");
	ft_memcpy_tester();
	printf("\n");
	ft_memcmp_tester();
	printf("\n");
	ft_memmove_tester();
	printf("\n");
	ft_strlcpy_tester();
	printf("\n");
	ft_strnstr_tester();
	printf("\n");
	ft_strlcat_tester();
	printf("\n");
	ft_atoi_tester();
	printf("\n");
	ft_calloc_tester();
	printf("\n");
	ft_strdup_tester();
	printf("\n");
	ft_substr_tester();
	printf("\n");
	ft_strjoin_tester();
	printf("\n");
	ft_strtrim_tester();
	printf("\n");
	ft_split_tester();
	printf("\n");	
	ft_itoa_tester();
	printf("\n");
	ft_strmapi_tester();
	printf("\n");
	ft_striteri_tester();
	printf("\n");
	ft_putchar_fd_tester();
	printf("\n");
	ft_putstr_fd_tester();
	printf("\n");
	ft_putendl_fd_tester();
	printf("\n");
	ft_putnbr_fd_tester();
	printf("\n");
	printf("\n");
	ft_lstnew_tester();
	printf("\n");
	ft_lstadd_front_tester();
	printf("\n");
	ft_lstsize_tester();
	printf("\n");
	ft_lstlast_tester();
	printf("\n");
	ft_lstadd_back_tester();
	printf("\n");
	ft_lstdelone_tester();
	printf("\n");
	ft_lstclear_tester();
	printf("\n");
	ft_lstiter_tester();
	printf("\n");
	ft_lstmap_tester();
	printf("\n");




	return (0);

}
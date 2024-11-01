#Definir el compilador y las flags de compilacion
CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
AR = ar rcs
RM = rm -f

#Archivos fuentes
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
	ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
	ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c\
	ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c

#Archivos objeto para convertir todos los .c en archivos .o (archivos objeto)
OBJ = $(SRC:.c=.o)

#Regla principal que se llama por defecto
all: $(NAME)

#Regla para crear la biblioteca estática
$(NAME) : $(OBJ)
	$(AR) $(NAME) $(OBJ)

#Regla para compilar cada archivo .c en su correspondiente archivo .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

#Regla para limpiar los archivos de objeto
clean:
	$(RM) $(OBJ)

#Regla para limpiar todo
fclean: clean
	$(RM) $(NAME)

#Recompilar todo
re: fclean all
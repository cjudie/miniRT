# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akayle <akayle@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/03 16:46:52 by akayle            #+#    #+#              #
#    Updated: 2022/11/03 16:46:56 by akayle           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libmlx.a

SRC		=	mlx_shaders.c		mlx_new_window.m	mlx_init_loop.m \
			mlx_new_image.m		mlx_xpm.c			mlx_int_str_to_wordtab.c \
			mlx_png.c			mlx_mouse.m

SRCDIR	=	sources

OBJDIR	=	objects

OBJ		=	$(addprefix $(OBJDIR)/,$(patsubst %.m,%.o,$(patsubst %.c,%.o,$(SRC))))

CC		=	cc

CFLAGS	=	-O2 -DSTRINGPUTX11 -w

all : $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $?

$(OBJDIR)/%.o : $(SRCDIR)/%.c
	@mkdir -p $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJDIR)/%.o : $(SRCDIR)/%.m
	@mkdir -p $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -rf $(OBJDIR)

fclean : clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
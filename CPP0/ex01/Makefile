NAME		= phonebook
CC			= c++
CFLAGS		= -Wall -Werror -Wextra -std=c++98 -MMD -MP 

SRCS		= PhoneBook.cpp Contact.cpp utils.cpp main.cpp
OBJS_DIR	= obj_files/
OBJS 		= $(addprefix $(OBJS_DIR), $(SRCS:.cpp=.o))

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJS_DIR)%.o: %.cpp
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

-include $(OBJS:.o=.d)

clean:
	rm -f $(OBJS)
	rm -rf $(OBJS_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
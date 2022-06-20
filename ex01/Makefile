FILES = \
	Zombie.cpp \
	zombieHorde.cpp \
	main.cpp

OUT_DIR = _OUT/

OBJ = $(addprefix $(OUT_DIR), $(FILES:.cpp=.o))
DEPS = $(OBJ:.o=.d)

DEPFLAGS = -MMD -MF $(@:.o=.d)

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = horde_zombies

all: $(NAME)

$(NAME): $(OBJ)
	c++ $(OBJ) -o $(NAME)

$(OBJ): $(OUT_DIR)%.o:%.cpp
	@mkdir -p $(dir $@)
	c++ $(CFLAGS) -c $(@:$(OUT_DIR)%.o=%.cpp) $(DEPFLAGS) -o $(@)

-include $(DEPS)

clean:
	rm -rf _OUT

fclean: clean
	rm -f $(NAME)

re: fclean all

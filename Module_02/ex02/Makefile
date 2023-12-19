CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98

SRC =	main.cpp \
		Fixed.cpp \


OBJ_DIR = obj
OBJ = $(addprefix $(OBJ_DIR)/, $(SRC:.cpp=.o))

EXEC = ex02

all:$(EXEC)

$(EXEC):$(OBJ)
	@$(CXX) $(CXXFLAGS) -o $@ $^

$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(OBJ_DIR)
	@$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(EXEC)

re: fclean all

.PHONY: re fclean clean all
CXX = c++
CXXFLAGS = -Wall -Werror -Wextra  -std=c++98

SRC_DIR = src
SRC_FILES =	main.cpp \
		Animal.cpp \
		Cat.cpp \
		Dog.cpp \
		WrongCat.cpp \
		WrongAnimal.cpp
SRC = $(addprefix $(SRC_DIR)/, $(SRC_FILES))

OBJ_DIR = obj
OBJ = $(addprefix $(OBJ_DIR)/, $(SRC_FILES:.cpp=.o))

EXEC = ex00

all:$(EXEC)

$(EXEC):$(OBJ)
	@$(CXX) $(CXXFLAGS) -o $@ $^

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(OBJ_DIR)
	@$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(EXEC)

re: fclean all

.PHONY: re fclean clean all
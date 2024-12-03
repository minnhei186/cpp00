CXX     := clang++
CXXFLAGS:= -Wall -Wextra -Werror -g
SRCS=$(wildcard src/*.cpp)
OBJS=$(SRCS:.cpp=.o)
INCLUDE=-Iinclude
NAME=phonebook


all     : $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)
%.o:%.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDE) -c $< -o $@ 
clean:
	rm -rf $(OBJS)
fclean:clean
	rm -f $(NAME)
re:fclean all


.PHONY  : all clean fclean re

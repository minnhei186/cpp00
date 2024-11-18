CXX     := clang++
CXXFLAGS:= -Wall -Wextra -Werror -g
SRCS=phonebook.cpp
OBJS=$(SRCS:.cpp=.o)
NAME=phonebook


all     : $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)
%.o:%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@ 
clean:
	rm -rf $(OBJS)
fclean:clean
	rm -f $(NAME)
re:fclean all


.PHONY  : all clean fclean re

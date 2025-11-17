NAME		= identify
CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
RM			= rm -f

SRCDIR		= sources
INCDIR		= include
OBJDIR		= obj

SOURCES		= main.cpp Base.cpp Functions.cpp
SRCS		= $(addprefix $(SRCDIR)/, $(SOURCES))
OBJS		= $(addprefix $(OBJDIR)/, $(SOURCES:.cpp=.o))

INCLUDES	= -I$(INCDIR)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	@mkdir -p $(OBJDIR)
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

clean:
	$(RM) -r $(OBJDIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
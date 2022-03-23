NAME=tarea1
SRC=$(wildcard src/*.c)
INCLUDES=-Iinclude
OBJS=$(patsubst src/%.c, out/%.o, $(SRC))
INCLUDE=$(wildcard include/*)




$(NAME): $(OBJS) $(INCLUDE)
	$(CC) $(INCLUDES) $(OBJS) -o $(NAME)

prepare:
	mkdir -p src out include

all: prepare $(OBJS) link

out/%.o: src/%.c
	$(CC) -o $@ -c $^ $(INCLUDES)

clean:
	rm $(NAME) $(OBJS)


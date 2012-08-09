CXX = g++
CXXFLAGS = -Wall -Wextra
EXEC = aur-down

$(EXEC): $(EXEC).cpp
	g++ $(EXEC).cpp -o $(EXEC) $(CXXFLAGS)

install: $(EXEC)
	cp $(EXEC) /usr/bin/

clean:
	rm -f $(EXEC)

purge: clean

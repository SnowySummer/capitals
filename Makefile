EXEC = capitals

.PHONY: build run clean


build:
	make -s $(EXEC)

$(EXEC) :
	gcc main.c -o $(EXEC)

run: $(EXEC)
	./$(EXEC)

clean:
	rm -f $(EXEC)

clean:
	@rm -f scrabble
build: clean
	@gcc scrabble.c -o scrabble
run: clean build
	@./scrabble	
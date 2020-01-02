make:
	g++ *.cpp -std=c++11 -o original_game
	./original_game
clean:
	rm original_game